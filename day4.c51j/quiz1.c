#define	_CRT_SECURE_NO_WARNINGS
#include	<stdio.h>

int main12()
{

	//����ڰ� 1�̻��� ���� n�� �Է��ϸ� 1���� n������ ���� ���ϴ� ���α׷�
	int i = 1;
	int n;
	int sum=0;
	printf("���� �Է� :");
	scanf("%d", &n);
	while (i <= n)
	{
		sum += i;
		i++;
	}
	printf("1����n������ �� : %d", sum);
	//1���� 100������ ������ 6�� ����� ���
	for (int i = 1; i <= 100; i++)
	{
		if (i % 6 == 0)
		{
			printf("6�� ��� %d", i);
		}
		printf("\n");
	}
	//���ĺ��� ��¹ް� �빮���Ͻ� ����
	char word = '\0';
	while (1)
	{
		printf("���ĺ� �Է� : ");
		rewind(stdin);//trash out �����Ⱚ ���� 
		scanf("%c", &word);
		if (word >= 65 && word <= 90)
		{
			printf("����");
			break;
		}
		else if (word >= 97 && word <= 122)
		{
			printf("%c �Է��� ", word);
		}
		//���ڸ� �Է¹ް� word�� ���� ���� word ���..?
	}

	return 0;
}