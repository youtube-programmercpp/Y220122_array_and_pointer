#include <stdio.h>
#include <stdlib.h> // _countof �}�N��
int main()
{
	//          [0]  [1]  [2]  [3]  [4]  [5]  [6]
	int a[] = { 100, 500, 300, 400, 800, 200 };
	int * p�ő�l = a; //&a[0]�̂��Ƃ� a �Ə�����
	int * p�ŏ��l = a; //&a[0]�̂��Ƃ� a �Ə�����

	int* p = &a[1]; //&a[1] �� a + 1 �Ə�����

	for (;;) {
		if (p == &a[_countof(a)]) // _countof(a) �̑���� sizeof a / sizeof *a �Ə����Ă��ǂ�
			break;
		else {
			if (*p�ő�l < *p)
				p�ő�l = p; //���̍ő�l���X�V
			else if (*p�ŏ��l > *p)
				p�ŏ��l = p; //���̍ŏ��l���X�V
			++p;
		}
	}

	printf("�ő�l: %d [%d]\n", *p�ő�l, (int)(p�ő�l - a));//�ő�l���m��
	printf("�ŏ��l: %d [%d]\n", *p�ŏ��l, (int)(p�ŏ��l - a));//�ŏ��l���m��
	printf("�@���@: %d\n", *p�ő�l - *p�ŏ��l);
}
