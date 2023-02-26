#define	_CRT_SECURE_NO_WARNINGS
#include	<stdio.h>

int main12()
{

	//사용자가 1이상의 정수 n을 입력하면 1부터 n까지의 합을 구하는 프로그램
	int i = 1;
	int n;
	int sum=0;
	printf("정수 입력 :");
	scanf("%d", &n);
	while (i <= n)
	{
		sum += i;
		i++;
	}
	printf("1부터n까지의 합 : %d", sum);
	//1부터 100까지의 정수증 6의 배수만 출력
	for (int i = 1; i <= 100; i++)
	{
		if (i % 6 == 0)
		{
			printf("6의 배수 %d", i);
		}
		printf("\n");
	}
	//알파벳을 출력받고 대문자일시 종료
	char word = '\0';
	while (1)
	{
		printf("알파벳 입력 : ");
		rewind(stdin);//trash out 쓰레기값 제거 
		scanf("%c", &word);
		if (word >= 65 && word <= 90)
		{
			printf("종료");
			break;
		}
		else if (word >= 97 && word <= 122)
		{
			printf("%c 입력함 ", word);
		}
		//숫자를 입력받고 word에 담은 다음 word 출력..?
	}

	return 0;
}