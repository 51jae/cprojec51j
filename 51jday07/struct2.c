#include	<stdio.h>
#include	<string.h>

//사람이라는 구조체를(사용자가 만든 자료형 ) 만들고 이름 , 나이를 저장하게 끔 정의
//구조체 : 함수 바깥에
struct 사람
{
	char 이름[30];	//최대 29자 (한글은 14자) 
	int 나이; 
};
int main2()
{
	char name[30];
	int age;
	struct 사람 boy;	//자료형은 struct 사람 , 변수명은 boy
	struct  사람 girl;
	{
		sprintf(name, "%s", "홍길동"); //name 변수에 %s를 넣음
		age = 30;
		printf("이름은 %s,나이는 %d\n", name, age);
	}
	//구조체
	sprintf(boy. 이름, "%s", "김소년");
	sprintf(girl. 이름, "%s", "이소녀");

	boy.나이 = 12;
	girl.나이 = 9;

	printf("소년의 이름은 %s, 나이는 %d세 \n", boy.이름, boy.나이);
	printf("소녀의 이름은 %s, 나이는 %d세 \n", girl.이름, girl.나이);
	printf("소녀의 이름은 %s, 나이는 %d세 \n", girl.이름, girl.나이);

	struct 사람 man = { "이순신",20 };
	printf("남자의 이름은 %s, 나이는 %d세 \n", man.이름, man.나이);


	return 0;
}