#include	<stdio.h>

int main6()
{
	//&(���ۻ���) :�ش� ������ �ּҰ��� �˷���
	//*(�ֽ��͸���ũ) : �ش� �ּ��� �������� �̵�����
	//�ڷ��� ���� * : ������ ���� ����

	//char cnum = 5;	
	//int inum = 999;
	//double dnum = 3.14;

	////������ ���� �ʱ�ȭ(����/�ּҴ���)
	//char* cptr = &cnum;
	//int* iptr = &inum;
	//double* dptr = &dnum;


	//printf("%p\n", cptr);
	//printf("%p\n", iptr);
	//printf("%p\n", dptr);

	////������ ���� ������ (���� ���)
	//printf("%c\n", *cptr);
	//printf("%d\n", *iptr);
	//printf("%lf\n", *dptr);

	printf("===============\n");

	int num = 10;
	int* pnum;		//������ ���� ����
	pnum = &num;	//������ ������ �ּҰ� ����

	*pnum = 20;	//pnum�� �����ϰ� �ִ� �ּҿ� ���� 20�� �־��

	printf("%d \n", num);	//20 ���ϴ� ���� �ƴ� ����

	//�������Ͽ� ���� / �������� 
	(*pnum)++;
	(*pnum)++;
	printf("%d\n", num);
	printf("%d \n", *pnum);
	return 0;
}