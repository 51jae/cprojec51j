#include	<stdio.h>

int main8()
{
	//for 문
	//for(;;) {}
	//while문이 너무 어려워서 좀 더 쉽게 쓸수 있는 for문 제공
	int num = 1;
	int sum = 0;
	while (num <= 10)
	{
		sum += num;
		num++;
	}
	printf("1부터 10까지의 합 : %d", sum);
	//()안에다가 플래그를 다 몰아버리자
	int add = 0;
	for (int i = 1; i <= 10; i++)
	{
		add += i;
	}
	printf("1부터 10까지의 합 : %d", add);
	return 0;
}