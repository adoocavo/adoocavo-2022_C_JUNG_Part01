/*scanf�Լ��� ����*/
#include<stdio.h>
#pragma warning(disable:4996) //4996�ش� ���� ����(Ÿ�ο��� �ҽ��ڵ� ������ �� ���!!)
int main(void)
{
	//�Է´��: ����1���� �ι� �Է�
	int num1, num2;

	printf("����1: "); //ù���� ���� �Է¹ޱ�
	scanf("%d", &num1); //scanf��ſ� scanf_s����ض�(vs����)
	
	printf("����2: "); //�ι�° ���� �Է¹ޱ�
	scanf("%d", &num2);
	
	printf("����1 %d + ����2 %d = %d\n", num1, num2, num1 + num2);

	return 0;


}
