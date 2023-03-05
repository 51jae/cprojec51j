#include	<stdio.h>
//함수의 구조 : 입력값 ,리턴값, 자료형
//자료형 함수명 (){}
//입력값 생략가능 , return 값 생갹가능 ,자료형은 return값을 따라간다
//입력값은 ()에 변수를 준비를 해두고 , 내용은 {}에 입력한다 

//입력값 x, 반환값 x
void First()
{
	//return을 안할것이기 때문에 생략, 자료형은 void
	//입력값 안받을 것이기 때문에 ()는 비워둠
	//사용자가 First 함수를 사용했을 때 동작할 코드를 적음 
	char str[64];
	printf("첫번째 함수 사용! \n");
	scanf("%s", str);
	printf("내가 입력한 문자열은 : %s\n", str);
}
//입력값0,반환값 x
void Second(char* str)
{
	printf("내가 전달한 문자열 : %s", str);
}
//입력값x 반환값 0
char Third()
{
	char ss[50] = { 0, };
	printf("입력할 문자열을 적으세요 : ");
	scanf("%s", ss);
	return ss;		//char*
}

//입력값0 , 반환값0
Fourth(int n1, int n2, int n3)	//잔달받고자 하는 만큼 변수를 생성해놓기
{
	printf("전달 받은 값 : %d, %d, %d ", n1, n2, n3);
	printf("다 더해줍니다\n");
	int result = n1 + n2 + n3;
	return result;	//함수 앞의 자료형과 동일하게
}

int main5()
{
	First(); //함수 사용법	(입력x반환x)
	
	Second("문자열");	//입력 0반환 x	(입력값은()를 통해서 전달)

	char* str= Third(); //입력x 반환0(반환값이 있으면 변수로 받거나 변수처럼  사용한다)
	printf("반환받은값 %s\n", str);
	printf("반환받은값 %s\n", Third);

	int* result = Fourth(5,7,-2);	//입력0,반환0
	printf("결과값 : %d\n", result);
	printf("결과 값 : %d\n", Fourth(1,1,-1));

	return 0;
}