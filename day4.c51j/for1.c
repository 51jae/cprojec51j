#include	<stdio.h>

int main8()
{
	//for ��
	//for(;;) {}
	//while���� �ʹ� ������� �� �� ���� ���� �ִ� for�� ����
	int num = 1;
	int sum = 0;
	while (num <= 10)
	{
		sum += num;
		num++;
	}
	printf("1���� 10������ �� : %d", sum);
	//()�ȿ��ٰ� �÷��׸� �� ���ƹ�����
	int add = 0;
	for (int i = 1; i <= 10; i++)
	{
		add += i;
	}
	printf("1���� 10������ �� : %d", add);
	return 0;
}