#define	_CRT_SECURE_NO_WARNINGS
#include	<stdio.h>

int main()
{
	//#2
	//������ �Է� �޾� Ȧ�� ���� ¦�� ���� �Ǻ�
	//int num1 = 0;
	//printf("���� �Է� :");
	//scanf("%d", &num1);
	//
	//if (num1 % 2 == 0)
	//{
	//	printf("¦��\n");
	//}
	//else 
	//{
	//	printf("Ȧ��\n");
	//}

	//#3
	//���̿� ���� ����ö ���ǥ 
	//���̸� �Է� �ϸ� ����� �ȳ����ִ� ���α׷� 
	/*
	6���̸�, 65�� �̻�: 0
	6���̻�, 13�� �̸� : 500
	13���̻�,19�� �̸� : 900
	19�� �̻�, 65�� �̸� : 1250
	*/
	//int age = 0;
	//printf("���� �Է� : ");
	//scanf("%d", &age);

	//if (age < 6 || age >= 65)
	//{
	//	printf("0��");
	//}
	//else if (age >= 6 && age < 13)
	//{
	//	printf("500��");
	//}
	//else if (age >= 13 && age < 19)
	//{
	//	printf("900��");
	//}
	//else if (age >= 19 && age < 65)
	//{
	//	printf("1250��");
	//}
	// if ~ else if ~ else 

	// 123 #4 
	//�߰���� ����� ���ϰ� ������ ���� switch�� ������ �ο�
	//90�̻� 80�̻� 70�̻� 60 �̻� 60�̸� a b c d f
	//����88 ����90 ����58 ��ȸ81 ���� 72
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
	//���� ���ϱ�
	//���� : �⵵�� 4�� ����̸鼭 100�� ����� �ƴ� �⵵ or 400�� ����� �⵵ ||
	//���� 2���� 29�Ϸ� ����
	//�⵵�� �Է��ϸ� �ش� �⵵�� �������� �Ǻ����ִ� ���α׷� 
	int yr = 0;
	printf("�⵵ �Է� : ");
	scanf("%d", &yr);
	if ((yr % 4==0 && yr % 100!=0) || yr % 400==0)	//and �켱
	{
		printf("%d���� ����", yr);
	}
	else
	{
		printf("%d���� ������ �ƴ�\n", yr);
	}
}