#include	<stdio.h>

int main7()
{
	//사용자로부터 나이를 입력받아 20살 이상이면 1250, 20살 미만이면 800원
	int age1= 0;
	printf("나이 입력: ");
	scanf_s("%d", &age1);
	printf("%d\n", age1);
	(age1 >= 20) ? printf("1250\n") : printf("800\n");




	/*당신의 나이는 26세이며,요금은 1250원 입니다
		당신의 나이는 19세이며 요금은 800원 입니다*/




	//사용자로부터 나이와 키를 입력받아 나이가 12세 이상이고 키가 120cm이상일 때만 놀이기구 탑승 허용
	/*놀이기구에 탑승할수 있습니다.
	놀이기구에 탑승할수 없습니다.*/
	int age = 0;
	int high = 0;
	printf("나이 입력: ");
	scanf_s("%d", &age);
	printf("나이 : %d\n", age);
	printf("키입력 : ");
	scanf_s("%d", &high);
	printf("키 : %d\n", high);
	(age >= 12 && high >= 120) ? printf("탑승가능") : printf("탑승불가능");
	//, >> &&
	return 0;
}