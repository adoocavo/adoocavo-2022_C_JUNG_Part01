/*�Ǽ��� ��� ǥ��*/
#include<stdio.h>
int main(void) {
	int inum = 123.456; //ū ���� ���� ������ Ÿ�� ������ �����ϸ� ����Ǵ� ����(rv��) �߸���
	float fnum = 123.456;
	double dnum1 = 123.456, dnum2 = 0.00123456;
	printf("inum = %d\n", inum);
	printf("fnum = %f\n", fnum);
	printf("dnum2 = %lf\n", dnum1);
	printf("dnum2 = %lf\n", dnum2);

	return 0; 
}