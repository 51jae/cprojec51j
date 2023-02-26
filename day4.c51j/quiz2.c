#define	_CRT_SECURE_NO_WARNINGS
#include	<stdio.h>

int main()
{
	//1 : 100~200숫자중 3과 7의 공배수를 출력하는 프로그램
	
	//for (int i = 100; i < 201; i++)
	//{
	//	if ((i % 3 == 0) && (i % 7 == 0))
	//	{
	//		printf("공배수 %d", i);
	//	}
	//	printf("\n");
	//}

	//2 
	 //2~9 숫자중 두개를 입력 받아 구구단 출력
	//만약 4와 8를 입력하면 4단 8단 출력
	// 만약 8과 4를 입력해도 4단 8단입력 
	int n1, n2;
	int start, end;
	printf("첫번쨰숫자 : ");
	scanf("%d", &start);
	printf("두번째 숫자 : ");
	scanf("%d", &end);

	//start end 보다 더 크면 바꾸기
	int func;
	if (start > end)
	{
		func = start;
		start = end;
		end = func;
	}

	for (n1 = 1; n1 < 10; n1++)
	{
		for (n2 = start; n2 <= end; n2++)
		{
			printf("%d x %d = %d\t", n2, n1, n1 * n2);
		}
		printf("\n");
	}
	
	return 0;
}