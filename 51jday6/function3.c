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
	printf("%d �� %d ������ ���� %d\n", num1 + num2, num1 - num2);
	return sum;
}
void qq(int n1)
{
	
}

//���� 2���� ���޹޾� �� ū ������ ��ȯ
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
	//int result; //����� ������ ����

	//result = getBigger(3, 5);		//3 5 ��
	//printf("ù��° ��� : %d\n", result);
	//result = getBigger(8, 2);		//8 2 ��
	//printf("�ι�° ��� : %d\n", result);
	//result = getBigger(4, 4);		//4 4 ��
	//printf("����° ��� : %d\n", result);

	//�ΰ��� ������ �Ű� ������ �Է¹޾� �� ������ ���� ���� ���� ������ ����� ��� ��� �ϴ� �Լ� ����
	
	math(3, 5);
	//2
	//�� ������ �Ű������� �޾� �� ���� ������ ��� ������ ���� ��ȯ �ϴ� �Լ� ����

	Sum(5, 9);

	//3 ���� �Ѱ��� �Ű������� �޾� �� ������ 200 �� ū ���� ���� �� 7�� ����� ��� �����ϴ��� ��ȯ���ִ� �Լ� ����
	//���� ��� , 100�� ���� ������ 100~300������ 7�� ����� ������ ��ȯ

	qq(3);
	//4 ����ڷκ��� Ű�� �Է� �޾� m ������ ��ȯ�ϴ� �Լ� ����
	//Ű scnaf �Է��� main�Լ����� ���� , ���� �� �Լ������� �Ű������� �޾� m�� ��ȯ 


	//5 �ʸ� �Է¹޾� �Ű� ������ �����Ѵ�
	//�Լ��� ���޹��� �ʸ� ��/��/�� ���·� ����ϱ�
	/*��:3615
	���: 1�ð� /0��/15��
	*/
	return 0;
}