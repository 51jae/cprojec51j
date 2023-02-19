#include	<stdio.h>

int main6()
{
	//2.
	int num1 = 27;

	printf("%d\n", num1>10); //1
	printf("%d\n", num1 != 5);

	printf("%d\n", num1 >= 27);
	printf("%d\n", num1 == 27);	//1

	printf("%d\n", num1 < 30);	//1	
	printf("%d\n", num1 <= 27);//1

	//3
	//국어 86 영어 75 수학 88 사회 60 과학 96
	// 평균을 구하세요 소수점까지 출력
	int kor = 86;
	int eng = 75;
	int math = 88;
	int soc = 60;
	int sci = 96;
	int score = kor + eng + math + soc + sci;
	double avg = score / 5;
	printf("평균 : %lf\n", avg);

	//4 
	//증감연산자 사용
	int num = 5;
	//각 num에 증감연산자를 적용하여 668 결과출력 ++,--
	printf("num의 값 : %d\n", ++num);
	printf("num의 값 : %d\n", num++);
	printf("num의 값 : %d\n", ++num);
	return 0;
}