#include	<stdio.h>
#include	<string.h>

int main3()
{
	//2개의 문자열을 입력 받아 같은지 같지 않은지 알려주는 프로그램"%[^\n]s"
	/*			strcmp
	메시
	메시 
	=> 같습니다.
	메시
	호날두
	같지 않습니다*/	
	char name1[50] = { 0 , };
	char name2[50] = { 0 , };
	scanf("%[^\n]s", name1);
	rewind(stdin);	//버퍼비우기
	scanf("%[^\n]s", name2);
	if (strcmp(name1,name2) == 0)
	{
			printf("같다\n");
	}
	else
	{
			printf("같지 않다\n");
	}

	//위 입력받은 문자열 중 길이가 긴 문자열 부터 출력 
	/*
	리에넬 메시
	호날두
	리오넬 메시 호날두*/
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