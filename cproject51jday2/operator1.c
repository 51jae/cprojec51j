#include	<stdio.h>

int main1()
{
	char str[100];
	int num; 
	double dnum;
	char chr;

	printf("입력하세요 : "); //출력 printf 
	scanf("%d", &num);	//입력은 scanf
	printf("입력한값은 %d입니다 . \n", num);

	printf("문자열을 입력 : ");
	scanf("%s", str);	//문자열은 &기호 없이
	printf("입력한 값은 %s 입니다 \n", str);

	printf("실수 입력하세요 : "); //출력 printf 
	scanf("%lf", &dnum);	//입력은 scanf
	printf("입력한값은 %lf입니다 . \n", dnum);

	rewind(stdin);	//scnaf 문잡입력 버그 버퍼비우기
	printf("문자입력하세요 : "); //출력 printf 
	scanf("%c", &chr);	//입력은 scanf
	printf("입력한값은 %c입니다 . \n", chr); //char 한글은 한글 불가능 2개공간 차지

	return 0;
}