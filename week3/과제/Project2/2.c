#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

	int score;
	printf("������ �Է��ϼ��� >>>");
	scanf("%d", &score);

	if (score >= 90) {
		printf("������ %d���̰�, ������ A���� �Դϴ�\n", score);
	}
	else if (score < 90 && score >= 80) {
		printf("������ %d���̰�, ������ B���� �Դϴ�.\n", score);
	}
	else if (score < 80 && score >= 70) {
		printf("������ %d���̰�, ������ C���� �Դϴ�.\n", score);
	}
	else if (score< 70 && score >= 60) {
		printf("������ %d���̰�, ������ D���� �Դϴ�.\n", score);
	}
	else {
		printf("������ %d���̰�, ������ F���� �Դϴ�.", score);
	}
	}