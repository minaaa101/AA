#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	int i = 1;
	int n = 0;
	int sum = 0;

	printf("������ �Է��ϼ��� >>> ");
	scanf("%d", &n);

	while (i <= n) {
		sum = sum + i;
		i++;
	}

	printf("1���� %d������ ���� %d�Դϴ�.\n", n, sum);
	return 0;
}

