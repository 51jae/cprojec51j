#define	_CRT_SECURE_NO_WARNINGS
#include	<stdio.h>

int main2()
{
	//반복문 
	//while(){}:()맞으면 {}실행하고 ()로 돌아감
	while(1)
	{
		printf("while문 실행\n");
	}
	printf("while 문  끝\n");

	//if문과while문위 차이: 조건이 맞으면 실행하고 돌아가냐 안돌아가냐의 차이
	//while "()조건이 맞으면 {}실해하고 위로 올라가서 () 조건을 다시 검사 (틀릴때까지)

	return 0;
}