#include <stdio.h>
#include <stdlib.h> // _countof マクロ
int main()
{
	//          [0]  [1]  [2]  [3]  [4]  [5]
	int a[] = { 100, 500, 300, 400, 800, 200 };
	int 最大値_添え字 = 0;
	int 最小値_添え字 = 0;

	int i = 1;

	for (;;) {
		if (i == _countof(a)) // _countof(a) の代わりに sizeof a / sizeof *a と書いても良い
			break;
		else {
			if (a[最大値_添え字] < a[i])
				最大値_添え字 = i; //仮の最大値を更新
			else if (a[最小値_添え字] > a[i])
				最小値_添え字 = i; //仮の最小値を更新
			++i;
		}
	}
	printf("最大値: %d [%d]\n", a[最大値_添え字], 最大値_添え字);//最大値が確定
	printf("最小値: %d [%d]\n", a[最小値_添え字], 最小値_添え字);//最小値が確定
	printf("　差　: %d\n", a[最大値_添え字] - a[最小値_添え字]);
}
