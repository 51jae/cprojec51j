#include	<stdio.h>
void math(int num1, int num2)
{
	printf("%d %d %d %d ", num1 + num2,num1 - num2,num1 * num2,num1 / num2);
	
	return  0;
}
int Sum(int num1, int num2)
{
	int sum = 0;
	for (int i = num1+1; i < num2; i++)
	{
		sum += i;
	}
	printf("%d 와 %d 사이의 총합 %d\n", num1 + num2, num1 - num2);
	return sum;
}
void qq(int n1)
{
	
}

//정수 2개를 전달받아 더 큰 정수를 반환
/*int getBigger(int n1, int n2)
{
	if (n1 > n2)
	{
		return n1;
	}
	else if (n1 < n2)
	{
		return n2;
	}
	else
	{
		return 0;
	}
}*/
int main()
{
	//int result; //결과를 저장할 변수

	//result = getBigger(3, 5);		//3 5 비교
	//printf("첫번째 결과 : %d\n", result);
	//result = getBigger(8, 2);		//8 2 비교
	//printf("두번째 결과 : %d\n", result);
	//result = getBigger(4, 4);		//4 4 비교
	//printf("세번째 결과 : %d\n", result);

	//두개의 정수를 매개 변수로 입력받아 두 정수의 덧셈 뺄셈 곱셈 나눗셈 결과를 모두 출력 하는 함수 정의
	
	math(3, 5);
	//2
	//두 정수를 매개변수로 받아 두 정수 사이의 모든 숫자의 합을 반환 하는 함수 정의

	Sum(5, 9);

	//3 정수 한개를 매개변수로 받아 그 수보다 200 더 큰 정수 사이 중 7의 배수가 몇개나 존재하는지 반환해주는 함수 정의
	//예를 들어 , 100을 전달 받으면 100~300사이의 7의 배수의 갯수를 반환

	qq(3);
	//4 사용자로부터 키를 입력 받아 m 단위로 반환하는 함수 정의
	//키 scnaf 입력은 main함수에서 진행 , 정의 한 함수에서는 매개변수로 받아 m로 반환 


	//5 초를 입력받아 매개 변수로 전달한다
	//함수는 전달받은 초를 시/분/초 형태로 출력하기
	/*초:3615
	결과: 1시간 /0분/15초
	*/
	return 0;
}