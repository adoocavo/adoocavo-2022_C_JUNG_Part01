/*���ڿ� ����*/
#include<stdio.h>
#define MAX 100
int main(void) {
	//1. ����(�迭)���� + 2. �ʱ�ȭ
	char pnum[MAX] = "AB01", pname[MAX] = "apple"; //����
	int price = 12000, count = 100;
	double height = 30.7, weight = 20.6;

	//3. ���� ���๮
	printf("��ǰ��ȣ: %s\n", pnum);
	printf("��ǰ��: %s\n", pname);
	printf("����: %d\n", price);
	printf("�ֹ�����: %d\n", count);
	printf("����: %lf\n", height);
	printf("�ʺ�: %lf\n", weight);

}