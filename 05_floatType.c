/*실수형 상수 표현*/
#include<stdio.h>
int main(void) {
	int inum = 123.456; //큰 값을 작은 데이터 타입 변수에 저장하면 저장되는 값이(rv가) 잘린다
	float fnum = 123.456;
	double dnum1 = 123.456, dnum2 = 0.00123456;
	printf("inum = %d\n", inum);
	printf("fnum = %f\n", fnum);
	printf("dnum2 = %lf\n", dnum1);
	printf("dnum2 = %lf\n", dnum2);

	return 0; 
}