#include	<stdio.h>
#include	<string.h>

typedef struct work 
{
	char name[30];
	char num[30];
	int money;
}worker;
int main6()
{
	//����ü worker�� ����� ������ WORKER�� �ο�
	//������� : �̸�(char*,��ȭ��ȣchar* ,����int  
	worker ����[3] = {
		{"���ӽ�","010-1111-2222","3000000"},
		{ "�ص�","010-3333-4444","4000000" },
		{ "�׸�","010-5555-6666","5000000" }
	};
	//����ü ���(3��¥�� �迭)
	for (int i = 0; i <sizeof(����)/sizeof(worker); i++)
	{
		printf("�̸� : %s,��ȭ��ȣ : %s,���޿� : %d", ����[i].name, ����[i].num, ����[i].money);
	}
	return 0;
}