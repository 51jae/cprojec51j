#include	<stdio.h>

int main11()
{
	//��� : ���ǹ� , �ݺ��� , �б⹮
	//�ݺ��� : while, fow 
	//��Ÿ ��� : break , continue, goto

	//break : �ݺ��� ������ , switch�� ������
	//continue : �ݺ��� ������ ���ư���

	int num;

	while (1)
	{
		printf("-1 end : ");
		scanf("%d", &num);
		if (num == 1)
		{
			break;
			printf("this cod dead code \n");
		}
	}
	// continue
	//�ݺ��� 1ȸ�� ��� (�ؿ� �ڵ�� ���̻� �������� �ʰ� ���� �ö�)
	
	for (int n = 1; n <= 5; n++)
	{
		if (n == 3)
		{
			continue;
		}
		printf("%d", n);
	}
	return 0;
}