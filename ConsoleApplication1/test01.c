#include <stdio.h>
#include <stdlib.h>
int main()
{
	//初期化子 initializer
	//                        0   1   2   3   4   5   6   7   8   9
	static const int a[] = { 54, 91, 70, 81, 42, 92, 42, 78, 10, 29 };
	//最大値と最小値
	int 最大値_添え字 = 0;
	int 最小値_添え字 = 0;
	int i = 1;
	for (;;) {
		if (i == _countof(a)) // _countof(a) を sizeof a / sizeof *a としても良い
			break;
		else {
			if (a[最大値_添え字] < a[i])
				最大値_添え字 = i;
			else if (a[最小値_添え字] > a[i])
				最小値_添え字 = i;
			++i;
		}
	}
	printf("最大値: %d [%d]\n", a[最大値_添え字], 最大値_添え字);
	printf("最小値: %d [%d]\n", a[最小値_添え字], 最小値_添え字);
	printf("差　　: %d\n", a[最大値_添え字] - a[最小値_添え字]);
}
/*
ID非公開さん

2022/1/21 16:48

2回答

n個の整数が格納された配列において，最大値と最小値を求めて，その差を求めて表示させるプログラムを教えてください．また最大値と最小値が格納されていた場所（添え字）とそれらの値も表示させること．n個の整数は
初期化子で与えて良い．
*/