#include	<stdio.h>	

int main7()
{
	int a = 10;		//����a�� 10����
	int *p = &a;	//�����ͺ��� p�� a�� �ּ� ����
	*p = 20;		//������ �� p�� 20����
	printf("%d", a);	
	*p = 50;		//�������� p�� 50����
	printf("%d", a);
	printf("\n");
	//���� 10�� �����ϴ� int �� ���� number�� ���� �� �ʱ�ȭ�ϰ�
	//number�� ����� �޸� �ּҸ� �����ϴ� ������ ���� pnumber�� ����
	//�׸��� printf �Լ��� ȣ���� ���� 10�� ���� numver�� �ּҸ� ���
	//�̶� printf �Լ��� ��� �����ͷδ� ������ ���� pnumber���� �̿�
	int number = 10;
	int* pnumber = &number;
	printf("%d\n", *pnumber);
	printf("%d\n", pnumber);

	//3 �ڵ�  �ϼ��ϱ�
	int* ptr;
	int num1 = 5;
	int num2 = 8;
	ptr = &num1;
	printf("%d\n", *ptr);//5
	ptr = &num2;
	printf("%d\n", *ptr);//8

	//4 �ڵ� �ϼ��ϱ�
	int n1 = 100;
	int n2 = 200;
	int* ptr1 = &n1;
	int* ptr2 = &n2;
	printf("%d %d \n", *ptr1, *ptr2);	//100 200
	
	ptr1 = 200;		//ptr1 =&n2;
	ptr2 = 100;		//ptr2  =&n1;
	printf("%d %d \n", *ptr1, *ptr2); //200 100
	return 0;
}