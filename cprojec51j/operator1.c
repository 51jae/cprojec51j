#include	<stdio.h>

int main6()
{
	// 언어에는 연산 기호가 제공
	// + - * / %
	3 + 4; //연산기호는 가각의 기능을 제공해주고 사용법이 정해져 있음 ( 더하기는 양옆에 숫자를 적어줘야함)

	int num1, num2;

	num1 = 1; 
	num2 = 2;

	num1 + num2;		//변수를 통해서 계산을 하면 변수 안에 들어있는 값이 사용되서 계산
	printf("합은 : %d",num1+num2);
	int num3 = 0;
	num3 = num1 - num2		;
	printf("\n결과는 : %d\n", num3);
	return 0;
}