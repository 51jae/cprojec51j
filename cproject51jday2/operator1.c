#include	<stdio.h>

int main1()
{
	char str[100];
	int num; 
	double dnum;
	char chr;

	printf("�Է��ϼ��� : "); //��� printf 
	scanf("%d", &num);	//�Է��� scanf
	printf("�Է��Ѱ��� %d�Դϴ� . \n", num);

	printf("���ڿ��� �Է� : ");
	scanf("%s", str);	//���ڿ��� &��ȣ ����
	printf("�Է��� ���� %s �Դϴ� \n", str);

	printf("�Ǽ� �Է��ϼ��� : "); //��� printf 
	scanf("%lf", &dnum);	//�Է��� scanf
	printf("�Է��Ѱ��� %lf�Դϴ� . \n", dnum);

	rewind(stdin);	//scnaf �����Է� ���� ���ۺ���
	printf("�����Է��ϼ��� : "); //��� printf 
	scanf("%c", &chr);	//�Է��� scanf
	printf("�Է��Ѱ��� %c�Դϴ� . \n", chr); //char �ѱ��� �ѱ� �Ұ��� 2������ ����

	return 0;
}