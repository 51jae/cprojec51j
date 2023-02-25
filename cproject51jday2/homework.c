#include	<stdio.h>

int main()
{
	//삼항연산자 사용 
	//3
	//바구니에 복숭아를 10개씩 담을 수 있다. 
	//복숭아 갯수를 사용자로부터 입력받고 바구니수를 출력
	//ex. 복숭아를 16개를 입력받으면 바구니 2개가 필요
	//복숭아 157개를 입력받으면 바구니 16개가 필요

	//%: 나머지 구하기 기호를 통해서 나누어 떨어지면 값이 0과 같다
	//9%3==0 (9는 3으로 나누어 떨어진다,3의 배수) 0+1 x

	int peach = 0;
	int basket = 0;
	printf("복숭아의 개수는 : ");
	scanf("%d", &peach);

	
	basket = peach / 10;
	(peach % 10 == 0) ? basket : basket++;
	printf("필요한 바구니의 수 : %d\n",basket);
	


	//4
	//사용자로 부터 실수형 변수에 값을 입력받고 1의 자리 숫자만 출력하는 프로그램만들기(나누기와 형변환을 적절히 사용)
	//ex. 126.12 ==> 6
	//ex. 33.14 ==> 3
	float num1=0;
	int result = 0;
	scanf_s("%f", &num1);
	result = (int)num1 % 10;
	printf("%d\n",result);

	//5
	//사용자로부터 초(second)를 입력받아 [시,분,초]형태로 변환
	//ex. 3665 ==> 1시간1분 6초
	int sec, min, hour;
	printf("초 입력 : ");
	scanf_s("%d", &sec);
	min = sec / 60;
	hour = min / 60;
	sec = sec % 60;
	min = min % 60;
	printf("%02d시간 , %02d분,%02d초\n", hour, min, sec);
	return 0;
}