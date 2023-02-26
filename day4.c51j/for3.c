#include	<stdio.h>

int main10()
{
	//단수 for문
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
	//제어문 (조건문, 반복문,기타): 중청가능 
	//1.if안에 if 
	int n1 = 0;
	int n2 = 1;
	if (n1 < n2)
	{
		if (n1 != n2)
		{
			printf("n1과n2는 같지않다");
		}
		printf("n1이 작다\n");
	}
	//for안에 if
	for (int i = 0; i < 3; i++)
	{
		if (n1 != n2)
		{
			printf("조건문 코드 ! \n");
		}
		printf("반복문 코드\n");
	}
	//if안에 for
	if (n1 == n2)
	{
		//조건문이 맞을대만 반복문 이 실행
		for (int i = 0; i < 3; i++)
		{
			printf("조건문 안에 있는 반복문");
		}
	}
	//for안에 for 이증 반복문 
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			//바깥에 있는for의 갯수만큼 for를 반복
			printf("안쪽for%d\n", j);
		}
		printf("===바깥for%d===\n", i);
	}

	//이증for문 
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("i=%d,j=%d\n", i, j);
		}
	}
	return 0;
}