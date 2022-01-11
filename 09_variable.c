/*변수 기본구조*/
#include<stdio.h>

int main(void)
{
	//1.변수 선언문
	int age;
	double height;
	char blood = 'B'; // 변수 선언+초기화

	//2.변수 초기화
	age = 28;
	height = 165.7;
	
	//3.변수 실행문

	printf("나이: %d\n", age);
	printf("키: %lf\n", height);
	printf("혈액형: %c\n", blood);
	
	return 0;
}