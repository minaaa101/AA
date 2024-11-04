#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num;
	while (1) {
		printf("숫자를 입력하시오( 0을 입력하면 즉시 종료)>>>");
		scanf("%d", &num);

		printf("입력하신 숫자는 %d입니다.\n", num);

		if (num == 0) {
			break;
		}
	}
	printf("종료되었습니다.");
	return 0;
}

