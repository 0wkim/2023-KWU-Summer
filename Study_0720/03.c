#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>


int main_03()
{
	int* numA;
	int number;
	printf("������ ������ �Է��ϼ���. : ");
	scanf("%d", &number);

	numA = &number;

	*numA = number * 2;

	printf("�� �� ������ �� : %d", *numA);

}