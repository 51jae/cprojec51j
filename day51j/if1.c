#define	_CRT_SECURE_NO_WARNINGS
#include	<stdio.h>
int main1()
{
	//���ǹ� if  : ���ǿ� ���� �� ���α׷��� �ٸ��� ���� ���Ѿ� �� ��
	int num = 3;

//	(num < 3) ? printf("3���� �۽��ϴ� . ") : printf("3�̻��Դϴ� ");

	// if��
	// if () {}
	//()�ȿ� �ִ� ������ ������ �� {} �� �ִ� �ڵ带 �����ϴ� ����, ���� Ʋ���� {} ����
	if (num < 3)
	{
		//������ �������� �����ϴ� �ڵ� 
		printf("3���� �۽��ϴ� . \n");
	}

	if (num >= 3)
	{
		//num�� 3���� ũ�ų� ���� �� (������)�� �����ϴ� �ڵ�
		printf("3�̻��Դϴ�.\n");
	}

	if (num == 3)
	{
		printf("3�� �����ϴ� .\n");
	}

	int age1 = 20;
	//���̰� 20�̻��϶��� �����Դϴ�. ���
	printf("���� �Է� : ");
	scanf("%d", &age1);
	if (age1 >= 20)
	{
		printf("�����Դϴ�.");
	}
	if (age1 < 20)
	{
		printf("������ �ƴմϴ�.");
	}

	//if (){}
	return 0;
}