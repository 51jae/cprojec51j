#include	<stdio.h>

int main1()
{
		//������ �迭 : �迭 �ȿ� �迭
		//������ �迭 : �迭 �ȿ� �迭 �ȿ� �迭
	int arr[3][2] = { {1,2} ,{3,4},{5,6} };
	int arr2[3] = { 1,3,5 };

	printf("%d\n", arr2[1]);		//3
	printf("%d\n", arr[1][1]);		//4

	char str1[] = "abcd";		//5ĭ¥�� char : �ʱ�ȭ���ظ�ŭ �˾Ƽ� �迭 ũ�� ����		
	char* str1_1 = "abcd";		//�����ͷ� �ʱ�ȭ�� ���� 5ĭ¥�� �迭�� ����
	char str2[5] = "abcd";
	char str3[5][5] = {"Ŀ��","���","����","��","��"};
	//5,5,5,3,3

	//������ �迭 �������  == ���߹ݺ���
	
	for (int i = 0; i < 3;i++)	//�ٱ� for���� �ٱ� �迭 �ɰ���
	{
		for (int j = 0; j < 2;j++)	//����for���� ���� �迭 �ɰ���
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	//str3 �������
	for (int i = 0; i < 5; i++)
	{			
		if (i == 4)
		{
			printf("%s\n", str3[i]);
			break;
		}
		printf("%s, ", str3[i]);
	}
	return 0;
}