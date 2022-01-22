#include <stdio.h>
#include <stdlib.h> // _countof マクロ
int main()
{
	//          [0]  [1]  [2]  [3]  [4]  [5]  [6]
	int a[] = { 100, 500, 300, 400, 800, 200 };
	int * p最大値 = a; //&a[0]のことを a と書ける
	int * p最小値 = a; //&a[0]のことを a と書ける

	int* p = &a[1]; //&a[1] を a + 1 と書ける

	for (;;) {
		if (p == &a[_countof(a)]) // _countof(a) の代わりに sizeof a / sizeof *a と書いても良い
			break;
		else {
			if (*p最大値 < *p)
				p最大値 = p; //仮の最大値を更新
			else if (*p最小値 > *p)
				p最小値 = p; //仮の最小値を更新
			++p;
		}
	}

	printf("最大値: %d [%d]\n", *p最大値, (int)(p最大値 - a));//最大値が確定
	printf("最小値: %d [%d]\n", *p最小値, (int)(p最小値 - a));//最小値が確定
	printf("　差　: %d\n", *p最大値 - *p最小値);
}
