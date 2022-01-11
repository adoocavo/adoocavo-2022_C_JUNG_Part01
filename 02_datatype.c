/*자료형(데이터형, datatype)에 따른 데이터 범위*/
#include<stdio.h>
int main(void) {

	char a = -100; //signed char:-128 ~ 127
	unsigned char b = 256; // unsigned char: 0~255

	printf("a = %d\n", a);
	printf("b = %u\n", b);

	return 0;
}
/*자료형에는 저장할 수 있는 값의 범위가 존재한다
 */ 