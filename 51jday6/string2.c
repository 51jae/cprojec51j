#include	<stdio.h>
#include	<string.h>

int main3()
{
	//2���� ���ڿ��� �Է� �޾� ������ ���� ������ �˷��ִ� ���α׷�"%[^\n]s"
	/*			strcmp
	�޽�
	�޽� 
	=> �����ϴ�.
	�޽�
	ȣ����
	���� �ʽ��ϴ�*/	
	char name1[50] = { 0 , };
	char name2[50] = { 0 , };
	scanf("%[^\n]s", name1);
	rewind(stdin);	//���ۺ���
	scanf("%[^\n]s", name2);
	if (strcmp(name1,name2) == 0)
	{
			printf("����\n");
	}
	else
	{
			printf("���� �ʴ�\n");
	}

	//�� �Է¹��� ���ڿ� �� ���̰� �� ���ڿ� ���� ��� 
	/*
	������ �޽�
	ȣ����
	������ �޽� ȣ����*/
	int len1 = strlen(name1);
	int len2 = strlen(name2);
	if (len1 > len2)
	{
		printf("%s %s ", name1, name2);
	}
	else
	{
		printf("%s %s ", name2, name1);
	}
	return 0;
}