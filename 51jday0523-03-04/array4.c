#include	<stdio.h>

int main4()
{
	//���̰� 5�� int �� �迭�� �����ϰ� �ʱ�ȭ �Ѵ�.�̶� �� ��Ҵ� ���ϴ� ���� ��´�
	//�ش� �迭�� ���� ���� ����� ����ϱ�
	/*
	1.����
	2.���
	*/
	int sum;
	int avg;
	int num[5] = { 1,2,3,4,5 };
	 sum = num[0] + num[1] + num[2] + num[3] + num[4];
	printf("������ %d�Դϴ�", sum);
	 avg = sum / 5;
	printf("����� %d�Դϴ�.\n", avg);

	char str[64] = { '\0', };
	char reverse[64] = { 0, };

	scanf("%s", str);		//str[0] ='h',str[1]'e',str[2]='l',---
	int j = 0;
	for (int i = 63; i >= 0; i--)
	{
		if (str[i] == '\0')
		{
			continue;
		}
		reverse[j] = str[i];
		j++;
	}
	printf("%s", reverse);
	//NULL���ڰ� �ƴ� ��������
	//reverse[0] = str[4];
	//reverse[1] = str[3];
	//reverse[2] = str[2];
	//reverse[3] = str[1];
	//reverse[4] = str[0];
	
	
	return 0;
}