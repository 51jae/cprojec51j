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
	//���� 86 ���� 75 ���� 88 ��ȸ 60 ���� 96
	// ����� ���ϼ��� �Ҽ������� ���
	int kor = 86;
	int eng = 75;
	int math = 88;
	int soc = 60;
	int sci = 96;
	int score = kor + eng + math + soc + sci;
	double avg = score / 5;
	printf("��� : %lf\n", avg);

	//4 
	//���������� ���
	int num = 5;
	//�� num�� ���������ڸ� �����Ͽ� 668 ������ ++,--
	printf("num�� �� : %d\n", ++num);
	printf("num�� �� : %d\n", num++);
	printf("num�� �� : %d\n", ++num);
	return 0;
}