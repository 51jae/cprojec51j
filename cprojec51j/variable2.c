#include	<stdio.h>	

int main3()
{
	//변수에는 종류가 있다 (자료형)
	//한글자,숫자,소수점,여려글자변수 등이 있다

	//문자 변수 (한글자) 1byte %c
	char one = 'A';
	printf("%c\n", one);

	//정수 변수 (소수점없는 숫자) 4byte %d
	int num1 = 123;
	printf("%d\n", num1);

	//실수 변수 (소수점있는 숫자) 8byte %lf
	double num2 = -3.14;
	printf("%lf\n", num2);

	//문자열 변수 (여러글자) %s
	char multi[100] = "99글자까지 저장 가능합니다.";//프로그램은 0부터 시작
	printf("%s", multi);
	/* 자료형 사용의 이유 :
	1.개발자의 의도를 명확하게 전달
	2. 개발자의 실수를 컴퍼알리(비쥬얼 스튜디오)가 검출해내기 위해서
	3. 자료형마다 공간의 크기가 다름 (최적화)
	*/

	return 0;
}