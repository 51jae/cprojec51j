#define	_CRT_SECURE_NO_WARNINGS
#include	<stdio.h>

int main1()
{
	//반복문 while, for
	//중복되거나 유사한 코드를 줄이기 위해서
	
	//while(){}
	//1.몇번 썻는지 알수가 없다 일일히 갯수를 세야함
	//2.갯수가 너무 많아지면 사람이 작업 할 수 없음
	// => 반복문 문법 도입
	char name[] = "홍길동";
	printf("%s은 잘생겼다\n",name);
	printf("%s은 잘생겼다\n",name);
	printf("%s은 잘생겼다\n",name);
	printf("%s은 잘생겼다\n",name);
	printf("%s은 잘생겼다\n",name);
	printf("%s은 잘생겼다\n",name);
	printf("%s은 잘생겼다\n",name);

	return 0;
}