#define	_CRT_SECURE_NO_WARNINGS
#include	<stdio.h>
#include	<string.h>

//��Ÿ ���� (�̸�,ü��,���ݷ�,����)
struct Unit
{
	char name[100];//���� �̸�
	int hp;	//ü��
	int atk;//���ݷ�
	int def;//����
};

//type def���� ������ �༭ ���θ��� ��밡��
//typedef : �ڷ����� �̸��� ���� ���ϴ� Ű����� ġȯ(����)
//��Ÿ �ǹ�
typedef struct Building
{
	char name[100];
	int hp;
}�ǹ�;	//struct Building -> �ǹ�
int main5()
{
	struct Unit ���۸� = { "���۸�",35,5,0 };
	struct Unit ���� = { "����",40,6,0 };
	struct Unit ���� = { "����",160,16,1 };
	�ǹ� ���� = { "����",1500 };		//struct Building ==> �ǹ�
	//1
	for (int i = 0; i < 10; i++)
	{
		���۸�.hp -= ����.atk;
		if (���۸�.hp <= 0)
		{
			printf("%s die", ���۸�.name);
			break;	//������ �׸� ����
		}
		else {
			printf("���۸��� ü���� %d\n", ���۸�.hp);
		}
	}

		//2

	
	return 0;
}