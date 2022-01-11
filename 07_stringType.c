/*문자열 상수(1개 이상의 문자 상수를 연속된 공간에 저장) 표현
크기(byte):입력문자개수+Null(1개)*/

#include<stdio.h>
int main(void) {
	printf("문자열 apple의 크기: %d\n", sizeof("apple")); 
	printf("문자열 sandwitch의 크기: %d\n", sizeof("sandwitch"));
	
	//문자 하나 출력 %c
	//문자열 출력은 %s

	printf("%c\n", 'A');
	printf("%s\n", "apple");
	

}