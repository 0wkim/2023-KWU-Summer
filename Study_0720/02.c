#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>


int main_02()
{
	int* pointer;
	int num = 1;

	pointer = &num;

	// �ּ� ��� �� %p ���
	printf("�����Ͱ� ����Ű�� �ּ�      : %p\n", pointer);
	printf("�����Ͱ� ����Ű�� �ּ��� �� : %d\n", *pointer);
	printf("������ ������ ��            : %d\n", num);
	printf("������ ������ �ּ�          : %p\n", &num);
	
}