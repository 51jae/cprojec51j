#include	<stdio.h>
#include	<string.h>
//������,����,�ٸ���Ÿ�̸��� ��� ������ ���� coffee����ü ����
struct mem
{
	char ������[15];
	int	price;
	char name[15];
};
int main4()
{
	struct mem Ŀ��1[10] = { "�ɳ�","ȫ�浿","4000" };
	sprintf(Ŀ��1.������ ,"�ɳ���");
	printf("%s�� %s���� %d�� �Ǹ� �մϴ�", Ŀ��1.name, Ŀ��1.������,Ŀ��1.price );
	return 0;	
}