/*������ ��� ǥ��*/
#include<stdio.h>
int main (void)
{
	char test = 'A';
	printf("���� ��� A = %c\n", 'A'); //A
	printf("���ڻ�� A�� ������ ���(Ascii Code) = %d\n", 'A'); //65
	printf("97 ������ ��� (Ascii Code)�� ���ڻ�� = %c\n", 97); //
	printf("A = %c\n", 65);
	printf("���� ����� ũ��: %zdByte", sizeof(test));
	printf("���� ����� ũ��: %zdByte", sizeof('A'));

	return 0;
}