#define _CRT_SECURE_NO_WARNINGS
#include	<stdio.h>
int main0()
{
	//���
	printf("hello world");
	printf("�ּ��� //");
	// ���� �ּ� ( ������ �ڵ尡 �ƴ϶� �޸�� ��� ctrl+shift+/)
	/*
		*/ //������ �ּ�
	//��Ʈ�� z �ڷ� x ������ 


	//����(variable) : �������
	//���� ���� ( ������ ����� ���)
	//�ڷ��� ����
	char word;	//���� ���� ���� 1 ����Ʈ = 8��Ʈ
	int num;	//������ ���� 4
	double dnum;	//�Ǽ��� ���� 8
	char str[256];	//���ڿ��� ����	 (256����Ʈ) [ũ��]

	//������ ���� ���� (���Կ�����)
	//������= �����Ͱ�;
	word='q';
	num = -3;
	dnum = 3.141592;
	sprintf(str, "hi world");	//#define _CRT_SECURE_NO_WARNINGS
	
	//���� �ʱ�ȭ ( ���� ����� ���ÿ� ���Ա���)
	char str2[256] = "hello world";

	//���� ��� 
	int num2 = num; // num�� ����ִ� ���� ��� 
	printf("�������� %c\n", word);
	printf("�������� %d\n", num);
	printf("�Ǽ����� %lf\n", dnum);
	printf("�������� %s\n", str2);

	// +:���ϱ�
	// -:����
	// *:���ϱ�
	// / :������
	// % :������ ���ϱ�

	int a = 2;
	int b = 6;
	double c = 3.2;
	double d = 9.4;
	printf("%d + %d=%d�Դϴ�\n", a, b, a + b);
	printf("%d - %d=%d�Դϴ�\n", a, b, a - b);
	printf("%d * %d=%d�Դϴ�\n", a, b, a * b);
	printf("%d / %d=%d�Դϴ�\n", a, b, a /(double)b);
	printf("%d %% %d=%d�Դϴ�\n", a, b, a % b);
	printf("%lf + %lf=%lf�Դϴ�\n", c, d, c + d);

	return 0;
}