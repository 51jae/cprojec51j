/*23 02 25전날 리뷰*/
#define	_CRT_SECURE_NO_WARNINGS
#include	<stdio.h>
int main0()
{
	//변수 :저장곤간 ( 자주사용되거나 변경 될 것 같은 값은 미리 저장, 추후 업데이트)
	char a = 'wo';	//한문자 type(1칸~256
	short bb = 0;		//정수type(2칸~65536
	int b=0;			//정수type(4칸~42억
	unsigned	int u_b = 0u;	//정수type(4칸~42억 : 음수를 없애고 범위를 늘린다
	long long bbb = 0;	//정수type(8칸~
	double c=0.0;		//실수type(8칸
	float d=0.0f;		//실수type(4칸
	char str[256] = { 0, }; //256개 모두에 0을 넣음 (256칸
	//변수 선언 , 대입 , 초기화 , 사용
	int g;//선언
	g = 0;//대입
	int gg = 0;//초기화
	gg;//사용

	// 출력과 입력
	printf("값을 입력하세요 : ");
	scanf("%d", &gg);
	printf("입력값은 %d\n", gg);
	

	//대입연산자 =
	//산술연산자 +,-,*,/,%
	//누적연산자 +=,-=,/=,*=,%=
	//증감연산자 ++,--
	//비교연산자 ==,!=,>,<,>=,<=
	//관계연산자 &&,||,!	and or not
	//삼항연산자(조건식) ? 참이면:거짓이면 :
	//변수=(조건식)?참이면 저장값 : 거짓이면 저장값 : 
	return 0;
}