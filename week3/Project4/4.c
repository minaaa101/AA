#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num;
	while (1) {
		printf("���ڸ� �Է��Ͻÿ�( 0�� �Է��ϸ� ��� ����)>>>");
		scanf("%d", &num);

		printf("�Է��Ͻ� ���ڴ� %d�Դϴ�.\n", num);

		if (num == 0) {
			break;
		}
	}
	printf("����Ǿ����ϴ�.");
	return 0;
}

