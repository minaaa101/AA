#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

main()
{

	int a;
	int b;
	int c;

	printf("나이는?");
	scanf( "%d", &a);
	printf("생일은?");
	scanf("%d", &b);
	printf("학번은?");
	scanf("%d", &c);

	printf("====출력====\n");
	printf("나이: %d\n", a);
	printf("생일 : %d\n", b);
	printf("학번 : %d\n", c);

	return 0;
}