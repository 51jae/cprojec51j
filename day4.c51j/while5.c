#define	_CRT_SECURE_NO_WARNINGS
#include	<stdio.h>

int main7()
{
	//while ������ 10������ �� ���ϱ� 
		
	int num = 1;
	int sum = 0;
	while (num <=10)
	{
		sum += num;
		num++;
	}
			printf("1���� 10������ �� : %d", sum);
	return 0;
}