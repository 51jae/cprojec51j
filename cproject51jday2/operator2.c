#include	<stdio.h>

int main2()
{
	int num1;
	int num2; 
	// num1 �� �Է� �޴�
	printf("num1�� ���� �Է� : ");
	scanf("%d", &num1);		//���ڴ� &��ȣ�� ���� ���ڿ��� &��ȣ ����

	printf("num2�� ���� �Է� : ");
	scanf("%d", &num2);

	//num2�� �Է¹޴�
	printf("%d + %d=%d\n", num1, num2, num1 + num2);
	printf("%d - %d=%d\n", num1, num2, num1 - num2);
	printf("%d * %d=%d\n", num1, num2, num1 * num2);
	printf("%d / %d=%lf\n", num1, num2, num1 / (double)num2);
	printf("%d�� %d�� ���� �������� = %d\n", num1, num2, num1 % num2);


	return 0;
}