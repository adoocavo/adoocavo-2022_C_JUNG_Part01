/*�ڷ����� ũ�� Ȯ�� - sizeof������*/

#include<stdio.h>
int main(void) {
	//�ڷ��� ũ��(byte������ Ȯ�� ����)
	printf("signed char = %d\n", sizeof(char)); //����ǥ���� %zd
	printf("unsigned char = %u\n", sizeof(unsigned char));
	printf("signed int = %d\n", sizeof(int));
	printf("signed long = %d\n", sizeof(long));
	printf("float = %d\n", sizeof(float));
	printf("double = %d\n", sizeof(double));

	return 0;
} //sizeof�� ��� -> %d, %u, %zd����