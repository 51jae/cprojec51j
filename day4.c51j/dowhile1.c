#define	_CRT_SECURE_NO_WARNINGS
#include	<stdio.h>

int main5()
{
	int num = -1;
	/*while (num != -1)
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
	}*/
	do
	{
		printf("숫자입력(-1입력 종료) : ");
		scanf("%d", &num);
		if (num == 1)
			printf("종료");
		else
			printf("%d입력 \n", num);
	} while (num != -1);
	return 0;
}