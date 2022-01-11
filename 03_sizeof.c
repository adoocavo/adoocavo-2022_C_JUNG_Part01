/*자료형의 크기 확인 - sizeof연산자*/

#include<stdio.h>
int main(void) {
	//자료형 크기(byte단위로 확인 가능)
	printf("signed char = %d\n", sizeof(char)); //국제표준은 %zd
	printf("unsigned char = %u\n", sizeof(unsigned char));
	printf("signed int = %d\n", sizeof(int));
	printf("signed long = %d\n", sizeof(long));
	printf("float = %d\n", sizeof(float));
	printf("double = %d\n", sizeof(double));

	return 0;
} //sizeof로 출력 -> %d, %u, %zd가능