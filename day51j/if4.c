#define	_CRT_SECURE_NO_WARNINGS
#include	<stdio.h>

int main()
{
	//#2
	//정수를 입력 받아 홀수 인지 짝수 인지 판별
	//int num1 = 0;
	//printf("정수 입력 :");
	//scanf("%d", &num1);
	//
	//if (num1 % 2 == 0)
	//{
	//	printf("짝수\n");
	//}
	//else 
	//{
	//	printf("홀수\n");
	//}

	//#3
	//나이에 따른 지하철 요금표 
	//나이를 입력 하면 요금을 안내해주는 프로그램 
	/*
	6세미만, 65세 이상: 0
	6세이상, 13세 미만 : 500
	13세이상,19세 미만 : 900
	19세 이상, 65세 미만 : 1250
	*/
	//int age = 0;
	//printf("나이 입력 : ");
	//scanf("%d", &age);

	//if (age < 6 || age >= 65)
	//{
	//	printf("0원");
	//}
	//else if (age >= 6 && age < 13)
	//{
	//	printf("500원");
	//}
	//else if (age >= 13 && age < 19)
	//{
	//	printf("900원");
	//}
	//else if (age >= 19 && age < 65)
	//{
	//	printf("1250원");
	//}
	// if ~ else if ~ else 

	// 123 #4 
	//중간고사 평균을 구하고 점수에 따라서 switch로 학점을 부여
	//90이상 80이상 70이상 60 이상 60미만 a b c d f
	//국어88 영어90 수학58 사회81 과학 72
	/*int kor = 88;
	int eng = 90;
	int math = 58;
	int soc = 81;
	int sci = 72;
	double avg;
	int sum = kor + eng + math + soc + sci;
	double avg = sum / 5.0;
	switch ((int)avg/10)
	{
	case 10:
		printf("a");
		break;
	case 9:
		printf("a");
		break;
	case 8:
		printf("b");
		break;
	case 7:
		printf("c");
		break;
	case 6:
		printf("d");
		break;
	default:
		printf("f"); 
	}
	return 0;*/
	//윤년 구하기
	//윤년 : 년도가 4의 배수이면서 100의 배수가 아닌 년도 or 400의 배수인 년도 ||
	//윤년 2월이 29일로 끝남
	//년도를 입력하면 해당 년도가 윤년인지 판별해주는 프로그램 
	int yr = 0;
	printf("년도 입력 : ");
	scanf("%d", &yr);
	if ((yr % 4==0 && yr % 100!=0) || yr % 400==0)	//and 우선
	{
		printf("%d년은 윤년", yr);
	}
	else
	{
		printf("%d년은 윤년이 아님\n", yr);
	}
}