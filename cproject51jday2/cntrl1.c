#include	<stdio.h>

int main11()
{
	//제어문 : 조건문 , 반복문 , 분기문
	//반복문 : while, fow 
	//기타 제어문 : break , continue, goto

	//break : 반복문 끝내기 , switch문 끝내기
	//continue : 반복문 맨위로 돌아가기

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
	//반복문 1회성 취소 (밑에 코드는 더이상 실행하지 않고 위로 올라감)
	
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