#define	_CRT_SECURE_NO_WARNINGS
#include	<stdio.h>	
int main3()
{
	//if(){} : ()에 있는 조건이 맞을때만 {}코드 실행
	//if(){}~else{}:()가 맞을땐 if 의 {}실해으 틀릴땐 else {}를 실행

	//숫자
	//10보다 작은지
	//100보다 작은지
	//1000보다 작은지
	//10000보다 작은지
	//1000 이상인지
	int num = 10;
	if (num < 10)
	{
		printf("10보다 작다\n");
	}
	else if (num < 100)		//위에 if가 틀렸을 경우 검사
	{
		printf("100보다 작다\n");
	}
	else if (num < 1000)		//위에 if 가 틀렸을 경우 검사
	{
		printf("1000보다 작다\n");
	}
	else//다 틀렸을 경우 
	{
		printf("1000이상이다\n");
	}
	printf("\n");
	int age = 21;
	if (age > 20)
	{
		printf("성인");
	}
	else if (age >= 14)
	{
		//else if (){} : 위에 있는 조건이 틀리면 검사
		printf("청소년");
	}
	else
	{
		printf("미성년자");
	}
	printf("\n");

	/*
	if(조건1)
	{
	조건1이 맞을 경우
	}
	else if (조건2)
	{
	조건2가 맞을 경우
	}
	else if (조건3)
	{
	조건3이 맞을경우
	}
	else
	{
	모든 조건이 틀릴경우 실행
	}*/
	printf("\nquiz\n");
	int score = 0;
	printf("점수 입력 : ");
	scanf("%d", &score);
	//90점 이상은a
	//80점 이상은b
	//70점 이상은c
	//60점 이상은d
	//그 이하는f
	if (score >= 90)
	{
		printf("A");
	}
	else if (score >= 80)
	{
		printf("B");
	}
	else if (score >= 70)
	{
		printf("C");
	}
	else if (score >= 60)
	{
		printf("D");
	}
	else
	{
		printf("F");
	}
	return 0;
}