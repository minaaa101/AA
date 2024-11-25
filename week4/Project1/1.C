#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int a[5];
	int i;
	int sum = 0;

	printf("5명의 학생 점수를 입력하세요 >>>");
	for( i = 0 ; i<5 ; i++)
	{
		scanf("%d", &a[i]);
	}

	for (i = 0; i < 5; i++)
	{
		sum = sum + a[i];
	}

	float num1;
	num1 = sum / 5;

	
	printf("평균 : %f", num1);
	return 0;
}