#include	<stdio.h>

int main10()
{
	//�ܼ� for��
	//	int dan;
	//int mul;
	//for (dan = 2; dan < 10; dan++)
	//{
	//	for (mul = 1; mul < 10; mul++)
	//	{
	//		printf("%d", dan * mul);
	//	}
	//	//printf(" \n ");
	//}
	//��� (���ǹ�, �ݺ���,��Ÿ): ��û���� 
	//1.if�ȿ� if 
	int n1 = 0;
	int n2 = 1;
	if (n1 < n2)
	{
		if (n1 != n2)
		{
			printf("n1��n2�� �����ʴ�");
		}
		printf("n1�� �۴�\n");
	}
	//for�ȿ� if
	for (int i = 0; i < 3; i++)
	{
		if (n1 != n2)
		{
			printf("���ǹ� �ڵ� ! \n");
		}
		printf("�ݺ��� �ڵ�\n");
	}
	//if�ȿ� for
	if (n1 == n2)
	{
		//���ǹ��� �����븸 �ݺ��� �� ����
		for (int i = 0; i < 3; i++)
		{
			printf("���ǹ� �ȿ� �ִ� �ݺ���");
		}
	}
	//for�ȿ� for ���� �ݺ��� 
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			//�ٱ��� �ִ�for�� ������ŭ for�� �ݺ�
			printf("����for%d\n", j);
		}
		printf("===�ٱ�for%d===\n", i);
	}

	//����for�� 
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("i=%d,j=%d\n", i, j);
		}
	}
	return 0;
}