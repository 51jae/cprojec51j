#include	<stdio.h>
//구조체 정의
struct menu
{
	char* name; //메뉴의 이름
	int price;			//  가격
};
int main1()
{
	//구조체
	//언어 발전 : 업데이트 (유지보수)

	//변수 : 차수 수정을 위해 값을 저장해놓는 공간
	//배열 : 같은 주제의 변수들을 일열로 뭉쳐놓음(변수가 너무 많아지면 수정이 어려워짐)
	//함수 : 코드를 저장하는 공간 (코드 재활용 / 재사용)
	//구조체 : 배열이 같은 자료형으로만 만들어 지는 점을 극복 (개발자가 직접 만드는 자료형)

	//카페 메뉴와 가격을 보관
	//(1) 변수 
	//반복문 사용x, 코드찾기 오래걸림,코드 길어짐 , 관리 힘듬
	char* menu1 = "아메", * menu2 = "에스프", * menu3 = "카페라떼";
	int price1 = 1500, price2 = 1000, price3 = 3500;

	//(2) 배열
	//같은 주제의 변수들을 뭉쳐놓음 ,반복문 사용0, 코드찾기 오래걸림 ,코드 길어짐 짝궁을 잘 찾아야함
	//무슨 주제로 묶었는지 까먹게됨,짝궁을 잘 찾아야함
	char* menu[5] = { "아메","에스","카페","카모","카멜" };
	int pirce[5] = { 1500,100,2500,2500,3000 };

	//char*랑 int를 묶을 순 없을까? ==> 제공된 자료형으로 사용자가 다시 만드는 자료형(구조체)
	//(3) 구조체 
	struct menu coffee = { "아메리카노 ",1500 };		//자료형 : struct menu,변수명 : coffee
	struct menu cafe[5] = { {"아메리카노",1500},{"에스프레소",1000},{"카페라떼",2500}, {"카페모카",3000} };
	
	coffee.price = 2000;
	printf("메뉴이름은 : %s , 가격 : %d \n", coffee.name, coffee.price);

	return 0;
}