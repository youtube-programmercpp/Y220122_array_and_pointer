#include <stdio.h>
#include <stdlib.h> // _countof �}�N��
int main()
{
	//          [0]  [1]  [2]  [3]  [4]  [5]
	int a[] = { 100, 500, 300, 400, 800, 200 };
	int �ő�l_�Y���� = 0;
	int �ŏ��l_�Y���� = 0;

	int i = 1;

	for (;;) {
		if (i == _countof(a)) // _countof(a) �̑���� sizeof a / sizeof *a �Ə����Ă��ǂ�
			break;
		else {
			if (a[�ő�l_�Y����] < a[i])
				�ő�l_�Y���� = i; //���̍ő�l���X�V
			else if (a[�ŏ��l_�Y����] > a[i])
				�ŏ��l_�Y���� = i; //���̍ŏ��l���X�V
			++i;
		}
	}
	printf("�ő�l: %d [%d]\n", a[�ő�l_�Y����], �ő�l_�Y����);//�ő�l���m��
	printf("�ŏ��l: %d [%d]\n", a[�ŏ��l_�Y����], �ŏ��l_�Y����);//�ŏ��l���m��
	printf("�@���@: %d\n", a[�ő�l_�Y����] - a[�ŏ��l_�Y����]);
}
