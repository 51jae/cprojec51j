#define _CRT_SECURE_NO_WARNINGS
#include	<stdio.h>
int main0()
{
	//출력
	printf("hello world");
	printf("주석은 //");
	// 한줄 주석 ( 이줄은 코드가 아니라 메모로 취금 ctrl+shift+/)
	/*
		*/ //여러줄 주석
	//컨트롤 z 뒤로 x 앞으로 


	//변수(variable) : 저장공간
	//변수 선언 ( 변수를 만드는 방법)
	//자료형 변수
	char word;	//문자 변수 선언 1 바이트 = 8비트
	int num;	//정수형 변수 4
	double dnum;	//실수형 변수 8
	char str[256];	//문자열형 변수	 (256바이트) [크기]

	//변수에 값을 대입 (대입연산자)
	//변수명= 데이터값;
	word='q';
	num = -3;
	dnum = 3.141592;
	sprintf(str, "hi world");	//#define _CRT_SECURE_NO_WARNINGS
	
	//변수 초기화 ( 변수 선언과 동시에 대입까지)
	char str2[256] = "hello world";

	//변수 사용 
	int num2 = num; // num에 들어있는 값을 사용 
	printf("문자형은 %c\n", word);
	printf("정수형은 %d\n", num);
	printf("실수형은 %lf\n", dnum);
	printf("문자형은 %s\n", str2);

	// +:더하기
	// -:빼기
	// *:곱하기
	// / :나누기
	// % :나머지 구하기

	int a = 2;
	int b = 6;
	double c = 3.2;
	double d = 9.4;
	printf("%d + %d=%d입니다\n", a, b, a + b);
	printf("%d - %d=%d입니다\n", a, b, a - b);
	printf("%d * %d=%d입니다\n", a, b, a * b);
	printf("%d / %d=%d입니다\n", a, b, a /(double)b);
	printf("%d %% %d=%d입니다\n", a, b, a % b);
	printf("%lf + %lf=%lf입니다\n", c, d, c + d);

	return 0;
}