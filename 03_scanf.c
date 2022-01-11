/*scanf함수의 구조*/
#include<stdio.h>
#pragma warning(disable:4996) //4996해당 에러 끄기(타인에게 소스코드 공유시 꼭 사용!!)
int main(void)
{
	//입력대상: 숫자1개씩 두번 입력
	int num1, num2;

	printf("정수1: "); //첫번쨰 정수 입력받기
	scanf("%d", &num1); //scanf대신에 scanf_s사용해라(vs에서)
	
	printf("정수2: "); //두번째 정수 입력받기
	scanf("%d", &num2);
	
	printf("정수1 %d + 정수2 %d = %d\n", num1, num2, num1 + num2);

	return 0;


}
