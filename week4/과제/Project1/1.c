#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

main()
{
	int i;
	int a[5];
	double sum = 0;
	double k = 0;
	printf("5명의 학생 점수를 입력하세요 >>>");

	for (i = 0; i < 5; i++) {
		scanf("%d", &a[i]);
	}

	for (i = 0; i < 5; i++) {
		sum = sum + a[i];
	}

	k = sum / 5;
	printf("평균 : %lf", k);

	return 0;
}