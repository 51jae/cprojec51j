#define	_CRT_SECURE_NO_WARNINGS
#include	<stdio.h>

int main9()
{
	for (int i = 0; i < 3; i++)
	{
		printf("i is %d now\n", i);
	}
	//136
	int num;//for�� �ٱ��� ���� (for���� �����Ǿ �� ����
	//for�ȿ��� ������ �����ϸ� for�� ����� ���ÿ� ���� (�������)�� ������
	for (num = 0; num != -1;)//���� ���x
	{
		printf("�����Է� :  (-1�Է½� ���� : )");
		scanf("%d", &num);
	}
	/*
	for(�ʱⰪ;���ǽ�;������;)
	{
	������ ������ �ݺ��� �ڵ�;
	}*/
	return 0;
}