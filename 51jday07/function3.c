#include	<stdio.h>
typedef struct target
{
	int num1;
	int num2;
}T;
void Swap(T* t)
{
	int temp = (*t).num1;
	(*t).num1 = (*t).num2;
	(*t).num2 = temp;
}

void Swap2(T* t)
{
	int temp = t->num1;
	t->  num1 = t->num2;		//��ȣ�� ���� �������ϴ� ȭ��ǥ ����
	t->  num2 = temp;		
}
int main()
{
	//c��� : �Լ� + ����ü + ������
	T t1 = { 1,2 };
	T t2 = { 3,4 };
	T* p_t2 = &t2;
	printf("������  %d, %d", t1.num1, t1.num2);

	Swap(&t1);		//t1����ü ������ ��ġ(�ּҰ�)�� �Ѱ��ش�
	printf("������  %d, %d", t1.num1, t1.num2);
	printf("===============\n");
	//����ü ������ ������ ����ϱ� ���ؼ� ->�� ����Ѵ�
	printf("������  %d, %d", p_t2->num1, p_t2->num2);
	Swap(p_t2);		
	printf("������  %d, %d", p_t2->num1, p_t2->num2);
	return 0;
}