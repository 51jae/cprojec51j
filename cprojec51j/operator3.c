#include	<stdio.h>

int main8()
{
	//»ê¼ú¿¬»êÀÚ
	// + - * / %
	// +: ¿Ş ¿À °ªÀ» ´õÇÔ
	// - : ¿Ş ¿À °ªÀ» »­
	// * : ¿Ş ¿À °öÇÔ
	// / : ¿Ş ¿À ³ª´® 
	// % : ¿Ş ¿À °ªÀ» ³ª´« ³ª¸ÓÁö¸¦ ±¸ÇØÁÜ

	int num1 = 7, num2 = 3;
	printf("%d + %d=%d\n", num1, num2, num1 + num2);
	printf("%d - %d=%d\n", num1, num2, num1 - num2);
	printf("%d * %d=%d\n", num1, num2, num1 * num2);
	printf("%d / %d=%d\n", num1, num2, num1 / num2);
	printf("%d %% %d=%d\n", num1, num2, num1 % num2);

	return 0;
}