#define	_CRT_SECURE_NO_WARNINGS
#include	<stdio.h>

int main5()
{
	int num = -1;
	/*while (num != -1)
	{
		printf("���ڸ� �Է�(-1�Է½� ����):");
		scanf("%d", &num);
		if (num == -1)
		{
			printf("����");
		}
		else
		{
			printf("%d�� �Է��߽��ϴ�.\n", num);
		}
	}*/
	do
	{
		printf("�����Է�(-1�Է� ����) : ");
		scanf("%d", &num);
		if (num == 1)
			printf("����");
		else
			printf("%d�Է� \n", num);
	} while (num != -1);
	return 0;
}