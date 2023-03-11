#include	<stdio.h>
typedef struct target
{
	int num1;
	int num2;
}T;
void Swap(T* t)
{
	int temp = (*t).num1;
	(*t).num1 = (*t).num2;
	(*t).num2 = temp;
}

void Swap2(T* t)
{
	int temp = t->num1;
	t->  num1 = t->num2;		//괄호가 많고 지저분하니 화살표 변경
	t->  num2 = temp;		
}
int main()
{
	//c언어 : 함수 + 구조체 + 포인터
	T t1 = { 1,2 };
	T t2 = { 3,4 };
	T* p_t2 = &t2;
	printf("변경전  %d, %d", t1.num1, t1.num2);

	Swap(&t1);		//t1구조체 변수의 위치(주소값)를 넘겨준다
	printf("변경전  %d, %d", t1.num1, t1.num2);
	printf("===============\n");
	//구조체 포인터 변수를 사용하기 위해서 ->를 사용한다
	printf("변경전  %d, %d", p_t2->num1, p_t2->num2);
	Swap(p_t2);		
	printf("변경전  %d, %d", p_t2->num1, p_t2->num2);
	return 0;
}