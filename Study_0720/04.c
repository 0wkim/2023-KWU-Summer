#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>


int main_04()
{
	int* numA1;
	int* numA2;
	int num1, num2;

	printf("num1 : ");
	scanf("%d", &num1);
	printf("num2 : ");
	scanf("%d", &num2);

	numA1 = &num1;
	numA2 = &num2;

	printf("----------------------\n");
	printf("num1 : %d\n", *numA2);
	printf("num2 : %d", *numA1);

}