#include	<stdio.h>

int main()
{
	int kor = 50;
	int eng = 40;
	int math = 60;

	int sum = 0;
	double avg = 0.0;
	sum = kor + eng + math;
	avg = (double)sum / 3.0;
	

	printf("�հ� : %d\n", sum);
	printf("��� : %lf", avg);
	
	

	return 0; 
}