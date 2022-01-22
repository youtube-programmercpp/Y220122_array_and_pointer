#include <stdio.h>
#include <stdlib.h>
int main()
{
	//初期化子 initializer
	//                        0   1   2   3   4   5   6   7   8   9
	static const int a[] = { 54, 91, 70, 81, 42, 92, 42, 78, 10, 29 };
	//最大値と最小値
	const int* p最大値 = a; //ここでは a と書くだけで&a[0]の意味となる
	const int* p最小値 = a; //ここでは a と書くだけで&a[0]の意味となる
	const int* p = &a[1]; //&a[1] を a + 1 とも書ける
	for (;;) {
		if (p == &a[_countof(a)]) // _countof(a) を sizeof a / sizeof *a としても良い
			break;
		else {
			if (*p最大値 < *p)
				p最大値 = p;
			else if (*p最小値 > *p)
				p最小値 = p;
			++p;
		}
	}
	printf("最大値: %d [%d]\n", *p最大値, (int)(p最大値 - a));
	printf("最小値: %d [%d]\n", *p最小値, (int)(p最小値 - a));
	printf("差　　: %d\n", *p最大値 - *p最小値);
}
/*
ID非公開さん

2022/1/21 16:48

2回答

n個の整数が格納された配列において，最大値と最小値を求めて，その差を求めて表示させるプログラムを教えてください．また最大値と最小値が格納されていた場所（添え字）とそれらの値も表示させること．n個の整数は
初期化子で与えて良い．
*/