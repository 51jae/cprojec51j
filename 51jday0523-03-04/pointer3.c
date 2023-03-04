#include	<stdio.h>	

int main7()
{
	int a = 10;		//변수a에 10대입
	int *p = &a;	//포인터변수 p에 a의 주소 대입
	*p = 20;		//역참조 후 p에 20대입
	printf("%d", a);	
	*p = 50;		//역참조후 p에 50대입
	printf("%d", a);
	printf("\n");
	//정수 10을 저장하는 int 형 변수 number를 선언 및 초기화하고
	//number가 저장된 메모리 주소를 저장하는 포인터 변수 pnumber를 선언
	//그리고 printf 함수를 호출해 정수 10과 변수 numver의 주소를 출력
	//이때 printf 함수의 출력 데이터로는 포인터 변수 pnumber만을 이용
	int number = 10;
	int* pnumber = &number;
	printf("%d\n", *pnumber);
	printf("%d\n", pnumber);

	//3 코드  완성하기
	int* ptr;
	int num1 = 5;
	int num2 = 8;
	ptr = &num1;
	printf("%d\n", *ptr);//5
	ptr = &num2;
	printf("%d\n", *ptr);//8

	//4 코드 완성하기
	int n1 = 100;
	int n2 = 200;
	int* ptr1 = &n1;
	int* ptr2 = &n2;
	printf("%d %d \n", *ptr1, *ptr2);	//100 200
	
	ptr1 = 200;		//ptr1 =&n2;
	ptr2 = 100;		//ptr2  =&n1;
	printf("%d %d \n", *ptr1, *ptr2); //200 100
	return 0;
}