#include <stdio.h>
#include <stdlib.h>
int main()
{
	//�������q initializer
	//                        0   1   2   3   4   5   6   7   8   9
	static const int a[] = { 54, 91, 70, 81, 42, 92, 42, 78, 10, 29 };
	//�ő�l�ƍŏ��l
	const int* p�ő�l = a; //�����ł� a �Ə���������&a[0]�̈Ӗ��ƂȂ�
	const int* p�ŏ��l = a; //�����ł� a �Ə���������&a[0]�̈Ӗ��ƂȂ�
	const int* p = &a[1]; //&a[1] �� a + 1 �Ƃ�������
	for (;;) {
		if (p == &a[_countof(a)]) // _countof(a) �� sizeof a / sizeof *a �Ƃ��Ă��ǂ�
			break;
		else {
			if (*p�ő�l < *p)
				p�ő�l = p;
			else if (*p�ŏ��l > *p)
				p�ŏ��l = p;
			++p;
		}
	}
	printf("�ő�l: %d [%d]\n", *p�ő�l, (int)(p�ő�l - a));
	printf("�ŏ��l: %d [%d]\n", *p�ŏ��l, (int)(p�ŏ��l - a));
	printf("���@�@: %d\n", *p�ő�l - *p�ŏ��l);
}
/*
ID����J����

2022/1/21 16:48

2��

n�̐������i�[���ꂽ�z��ɂ����āC�ő�l�ƍŏ��l�����߂āC���̍������߂ĕ\��������v���O�����������Ă��������D�܂��ő�l�ƍŏ��l���i�[����Ă����ꏊ�i�Y�����j�Ƃ����̒l���\�������邱�ƁDn�̐�����
�������q�ŗ^���ėǂ��D
*/