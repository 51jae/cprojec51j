#define	_CRT_SECURE_NO_WARNINGS	
#include	<stdio.h>

int main5()
{
	//if ~ else if ~else
	//switch~ case ~break
	//swtich�� : ���� ���� ã�� �� ����ϴ� ���ǹ� 

	//if�� : ���� ���� ,��ġ/���� ġ ���� (>,==)
	//switch�� : ��ġ ���� (==)
	char word = 'a';

	//����� �Ǵ� ������ ()�� ���´� 
	switch (word)
	{
	case 'a':							//word==a
		printf("�ܾ�� a�Դϴ� .");
		break;							//case �� ������ break;
	case 'b':							//word ==b
		printf("�ܾ�� b�Դϴ� .");
		break;
	case 'c':								//word == c 
		printf("�ܾ�� c�Դϴ� .");
		break;
	default:								//��ġ�ϴ� case ������ ���  
		printf("�ش�Ǵ� �ܾ �����ϴ�.");		//else 
	}

	//swtich :() ��ġ�ϴ� �ָ� ã�� 

	int num = 0;
	printf("�Է� : ");
	scanf("%d", &num);
	//1~4
	switch (num)
	{
	case 1:
		printf("1 ����");
		break;
	case 2:
		printf("2 ����");
		break;
	case 3:
		printf("3 ����");
		break;
	case 4:
		printf("4 ����");
		break;
	default:
		printf("�ش�Ǵ� ��ȣ x");
	}
	
	return 0;
}