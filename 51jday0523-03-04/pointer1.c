#include	<stdio.h>

int main5()
{
	//������ : ����Ű��,���� �Ǵ� �Լ� �ּҸ� ����Ŵ
	//������ ���� : ������ ��ġ(�ּ�)�� ����ϴ� ����(����Ų ������ �ּҰ� �����ϴ� ����)
	//������ ��ư� , ������ ��� �̱� ������ ���� ���� ���� ����
	//c���� �ü���� ����� ���� ������� ����
	//num������ ����ض� ==> �̰��� ��ġ�� ������ ���� 
	//main�Լ��� ����ض� ==> �̰��� ��ġ�� �� �Լ��� ���۽��Ѷ�

	//�׷��� �����ʹ� ��ġ(�ּ�)�� ����Ű�� ���

	int num = 10;		//num ������ �ּҸ� �����غ��� 
	int* p_num = &num; // num ������ ��ġ�� �ּҸ� p_num������ ������ �����ض�


	//�ڷ��� ���� * : ������ ���� ����
	//& : �ּ������� �ּҸ� �˷���
	//* : ������ �ּ��� ��
	printf("������ : %d\n", *p_num); //p_num�� ���� �ִ� �ּҿ� ������ ǥ������ �տ� *�� �޾��ش�
	printf("�ּҰ� : %p\n", p_num); //�ּҰ�
	printf("�ּҰ� : %p\n", &num); //�ּҰ�
	printf("������ : %d\n", num); //num�� ��
	return 0;
}