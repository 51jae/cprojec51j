#define	_CRT_SECURE_NO_WARNINGS
#include	<stdio.h>

int main4()
{
	int num = 0;
	while (num != -1)
	{
		printf("숫자를 입력(-1입력시 종료):");
		scanf("%d", &num);
		if (num == -1)
		{
			printf("종료");
		}
		else
		{
			printf("%d를 입력했습니다.\n", num);
		}
	}
	return 0;
}