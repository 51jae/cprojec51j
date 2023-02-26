#define	_CRT_SECURE_NO_WARNINGS
#include	<stdio.h>

int main9()
{
	for (int i = 0; i < 3; i++)
	{
		printf("i is %d now\n", i);
	}
	//136
	int num;//for문 바깥에 선언 (for문이 종려되어도 값 유지
	//for안에서 변수를 선언하면 for문 종료와 동시에 변수 (저장공간)가 없어짐
	for (num = 0; num != -1;)//증감 사용x
	{
		printf("숫자입력 :  (-1입력시 종료 : )");
		scanf("%d", &num);
	}
	/*
	for(초기값;조건식;증감량;)
	{
	조건이 맞으면 반복할 코드;
	}*/
	return 0;
}