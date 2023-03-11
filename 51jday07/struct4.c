#include	<stdio.h>
#include	<string.h>
//원산지,가격,바리스타이름을 멤버 변수를 갖는 coffee구조체 정의
struct mem
{
	char 원산지[15];
	int	price;
	char name[15];
};
int main4()
{
	struct mem 커피1[10] = { "케냐","홍길동","4000" };
	sprintf(커피1.원산지 ,"케나다");
	printf("%s는 %s에서 %d로 판매 합니다", 커피1.name, 커피1.원산지,커피1.price );
	return 0;	
}