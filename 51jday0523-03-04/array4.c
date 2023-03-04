#include	<stdio.h>

int main4()
{
	//길이가 5인 int 형 배열을 선언하고 초기화 한다.이때 각 요소는 원하는 값을 담는다
	//해당 배열에 대해 다음 결과를 출력하기
	/*
	1.총합
	2.평균
	*/
	int sum;
	int avg;
	int num[5] = { 1,2,3,4,5 };
	 sum = num[0] + num[1] + num[2] + num[3] + num[4];
	printf("총합은 %d입니다", sum);
	 avg = sum / 5;
	printf("평균은 %d입니다.\n", avg);

	char str[64] = { '\0', };
	char reverse[64] = { 0, };

	scanf("%s", str);		//str[0] ='h',str[1]'e',str[2]='l',---
	int j = 0;
	for (int i = 63; i >= 0; i--)
	{
		if (str[i] == '\0')
		{
			continue;
		}
		reverse[j] = str[i];
		j++;
	}
	printf("%s", reverse);
	//NULL문자가 아닌 시점부터
	//reverse[0] = str[4];
	//reverse[1] = str[3];
	//reverse[2] = str[2];
	//reverse[3] = str[1];
	//reverse[4] = str[0];
	
	
	return 0;
}