/*정수형 상수 표현*/
#include<stdio.h>
int main(voud) {
	//10진수를 10진수(%d), 8진수(%o), 16진수(%x)로 출력
	printf("10진수 상수 12의 10진수 = %d\n", 12);
	printf("10진수 상수 12의 8진수 = %#o\n", 12); // %#o =>접두어 같이 출력 
	printf("10진수 상수 12의 16진수 = %#x\n", 12);
	printf("10진수 상수 12의 16진수 = %#X\n", 12);
	printf("=======================================");
	//10진수, 8진수, 16진수를 10진수(%d)로 출력
	printf("10진수 상수 12의 10진수 = %d\n", 12);
	printf("8진수 상수 014의 10진수 = %d\n", 014);
	printf("16진수 상수 0xc의 10진수 = %d\n", 0xc);

	return 0;

}