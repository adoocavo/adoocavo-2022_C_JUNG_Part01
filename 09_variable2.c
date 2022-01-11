#include<stdio.h>

int main(void)
{
	//1.변수 선언문
	int mit, nop;
	double nup;

	//2.변수 초기화
	mit = 11;
	nop = 23;
	nup = mit * nop / 2;

	//3.변수 실행문
	printf("밑면: %d, 높이: %d, 넓이: %.2lf\n", mit, nop, nup);

	return 0;
}
