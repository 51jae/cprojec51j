#define	_CRT_SECURE_NO_WARNINGS	
#include	<stdio.h>

int main5()
{
	//if ~ else if ~else
	//switch~ case ~break
	//swtich문 : 같은 값을 찾을 때 사용하는 조건문 

	//if문 : 범위 조건 ,일치/불일 치 조건 (>,==)
	//switch문 : 일치 조건 (==)
	char word = 'a';

	//대상이 되는 변수를 ()에 적는다 
	switch (word)
	{
	case 'a':							//word==a
		printf("단어는 a입니다 .");
		break;							//case 가 끝나면 break;
	case 'b':							//word ==b
		printf("단어는 b입니다 .");
		break;
	case 'c':								//word == c 
		printf("단어는 c입니다 .");
		break;
	default:								//일치하는 case 가없을 경우  
		printf("해당되는 단어가 없습니다.");		//else 
	}

	//swtich :() 일치하는 애를 찾기 

	int num = 0;
	printf("입력 : ");
	scanf("%d", &num);
	//1~4
	switch (num)
	{
	case 1:
		printf("1 선택");
		break;
	case 2:
		printf("2 선택");
		break;
	case 3:
		printf("3 선택");
		break;
	case 4:
		printf("4 선택");
		break;
	default:
		printf("해당되는 번호 x");
	}
	
	return 0;
}