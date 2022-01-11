#include<stdio.h>

int main(void)
{	/*
	int a = 95, b = 82;
	int c = 2;
	int d = 0;
	double e = 3.14;
	double f = 2.14;
	
	printf("%d\n", f);

	printf("%d\n", e);
	printf("%lf\n", (a + b) / 2);
	printf("%lf\n", c);
	printf("%lf\n", d);
	*/
	//return 0;
	char str[5] = "sky";
	int a[5] = { 77,90,85,70,50 };
	printf("%d\n", a);
	printf("%u\n", &a);
	printf("%u\n", &a[3]);
	printf("%u\n", a[3]);
	
	printf("%s\n", str);
	printf("%s\n", &str);
	printf("%s\n", "sky");
	printf("%p\n", str);
	//배열 내부 요소는 하나씩만 출력 가능?, 문자열은 되던데?
}
