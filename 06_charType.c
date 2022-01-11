/*문자형 상수 표현*/
#include<stdio.h>
int main (void)
{
	char test = 'A';
	printf("문자 상수 A = %c\n", 'A'); //A
	printf("문자상수 A의 정수형 상수(Ascii Code) = %d\n", 'A'); //65
	printf("97 정수형 상수 (Ascii Code)의 문자상수 = %c\n", 97); //
	printf("A = %c\n", 65);
	printf("문자 상수의 크기: %zdByte", sizeof(test));
	printf("문자 상수의 크기: %zdByte", sizeof('A'));

	return 0;
}