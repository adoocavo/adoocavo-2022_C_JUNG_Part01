/*매크로 상수*/
#include<stdio.h>
#define PI 3.14 //전처리 단계에서 전처리기가 main함수 블록 내의 매크로 상수PI를 대체문자열로 바꾼다 
int main(void)
{
	printf("PI = %.2lf\n", PI);
	printf("PI * 2 = %.2lf\n", PI * 2); //컴파일러가 메크로 상수 PI대신에 3.14(전처리문에 입력된 대체문자열)로 변경(치환)한다
	printf("PI * 3 = %.2lf\n", PI * 3);
	
	return 0;
}