#include	<stdio.h>
//�Լ��� ���� : �Է°� ,���ϰ�, �ڷ���
//�ڷ��� �Լ��� (){}
//�Է°� �������� , return �� �������� ,�ڷ����� return���� ���󰣴�
//�Է°��� ()�� ������ �غ� �صΰ� , ������ {}�� �Է��Ѵ� 

//�Է°� x, ��ȯ�� x
void First()
{
	//return�� ���Ұ��̱� ������ ����, �ڷ����� void
	//�Է°� �ȹ��� ���̱� ������ ()�� �����
	//����ڰ� First �Լ��� ������� �� ������ �ڵ带 ���� 
	char str[64];
	printf("ù��° �Լ� ���! \n");
	scanf("%s", str);
	printf("���� �Է��� ���ڿ��� : %s\n", str);
}
//�Է°�0,��ȯ�� x
void Second(char* str)
{
	printf("���� ������ ���ڿ� : %s", str);
}
//�Է°�x ��ȯ�� 0
char Third()
{
	char ss[50] = { 0, };
	printf("�Է��� ���ڿ��� �������� : ");
	scanf("%s", ss);
	return ss;		//char*
}

//�Է°�0 , ��ȯ��0
Fourth(int n1, int n2, int n3)	//�ܴ޹ް��� �ϴ� ��ŭ ������ �����س���
{
	printf("���� ���� �� : %d, %d, %d ", n1, n2, n3);
	printf("�� �����ݴϴ�\n");
	int result = n1 + n2 + n3;
	return result;	//�Լ� ���� �ڷ����� �����ϰ�
}

int main5()
{
	First(); //�Լ� ����	(�Է�x��ȯx)
	
	Second("���ڿ�");	//�Է� 0��ȯ x	(�Է°���()�� ���ؼ� ����)

	char* str= Third(); //�Է�x ��ȯ0(��ȯ���� ������ ������ �ްų� ����ó��  ����Ѵ�)
	printf("��ȯ������ %s\n", str);
	printf("��ȯ������ %s\n", Third);

	int* result = Fourth(5,7,-2);	//�Է�0,��ȯ0
	printf("����� : %d\n", result);
	printf("��� �� : %d\n", Fourth(1,1,-1));

	return 0;
}