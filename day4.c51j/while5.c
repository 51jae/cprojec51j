#define	_CRT_SECURE_NO_WARNINGS
#include	<stdio.h>

int main7()
{
	//while 문으로 10까지의 합 구하기 
		
	int num = 1;
	int sum = 0;
	while (num <=10)
	{
		sum += num;
		num++;
	}
			printf("1부터 10까지의 합 : %d", sum);
	return 0;
}