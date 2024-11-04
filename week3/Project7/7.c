#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	int i = 1;
	int n = 0;
	int sum = 0;

	printf("정수를 입력하세요 >>> ");
	scanf("%d", &n);

	while (i <= n) {
		sum = sum + i;
		i++;
	}

	printf("1부터 %d까지의 합은 %d입니다.\n", n, sum);
	return 0;
}

