#include	<stdio.h>

int main2()
{
	int num1;
	int num2; 
	// num1 을 입력 받다
	printf("num1의 값을 입력 : ");
	scanf("%d", &num1);		//숫자는 &기호를 적고 문자열은 &기호 없이

	printf("num2의 값을 입력 : ");
	scanf("%d", &num2);

	//num2을 입력받다
	printf("%d + %d=%d\n", num1, num2, num1 + num2);
	printf("%d - %d=%d\n", num1, num2, num1 - num2);
	printf("%d * %d=%d\n", num1, num2, num1 * num2);
	printf("%d / %d=%lf\n", num1, num2, num1 / (double)num2);
	printf("%d를 %d로 나눈 나머지는 = %d\n", num1, num2, num1 % num2);


	return 0;
}