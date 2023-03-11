#include	<stdio.h>
#include	<string.h>

typedef struct work 
{
	char name[30];
	char num[30];
	int money;
}worker;
int main6()
{
	//구조체 worker를 만들고 별명을 WORKER로 부여
	//멤버변수 : 이름(char*,전화번호char* ,월급int  
	worker 직원[3] = {
		{"제임스","010-1111-2222","3000000"},
		{ "앤디","010-3333-4444","4000000" },
		{ "테리","010-5555-6666","5000000" }
	};
	//구조체 사용(3개짜리 배열)
	for (int i = 0; i <sizeof(직원)/sizeof(worker); i++)
	{
		printf("이름 : %s,전화번호 : %s,월급여 : %d", 직원[i].name, 직원[i].num, 직원[i].money);
	}
	return 0;
}