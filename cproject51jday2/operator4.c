#include	<stdio.h>

int main5()
{

	//5. 비교연산자
	// 비교식을 제시하면 맞을땐는 1 틀리면 0이라고 알려줌
	// >,<,.>=,<=,==,!=(크다,작다,크거나같다,작거나같다,같다,다르다)
	int num1 = 10;
	int num2 = 11;
	printf("==:%d\n", num1 == num2);	//같다
	printf(">:%d\n", num1 > num2);	//왼쪽이크다
	printf("<:%d\n", num1 < num2);	//왼쪽이 작다
	printf(">=:%d\n", num1 >= num2);//왼쪽이 크거나 같다
	printf("<=:%d\n", num1 <= num2);//왼쪽이 작거나 같다
	printf("!=:%d\n", num1 != num2);//다르다
	//6. 관계연산자
	// &&,||,! (and or not)
	// && :and 양쪽이 모두 맞으면 참 1 하나라도 틀리면 거짓 0
	printf("&& : %d\n", num1 != num2 && num1 == 11);//양쪽이 맞을때만1 거짓면 0
	// ||: or 둘중 하나라도 맞으면 1 , 둘다 틀릴떄만 0
	printf("||: %d\n", num1 == num2 || num2 == 11);
	// !:not 0은 1로 바꾸고, 0이외의 숫자는 0으로 바꿈
	// 틀린건 맞도록 맞는건 틀리도록
	printf("! : %d\n", !(num1 == 10));
	//7. 삼항연산자
	//8. 비트연산자
	//9. 쉬프트연산자
	return 0;
}