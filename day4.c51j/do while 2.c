#define	_CRT_SECURE_NO_WARNINGS
#include	<stdio.h>

int main6()
{	
	int num = 0;
	int sum = 0;
	
	//1부터 10까지의 합 
	do {
		num++;
		sum += num;
	} while (num < 10);
	printf("1~10까지의 합 : %d", sum);
	return 0;
}