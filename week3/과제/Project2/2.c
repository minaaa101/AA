#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

	int score;
	printf("점수를 입력하세요 >>>");
	scanf("%d", &score);

	if (score >= 90) {
		printf("점수는 %d점이고, 학점은 A학점 입니다\n", score);
	}
	else if (score < 90 && score >= 80) {
		printf("점수는 %d점이고, 학점은 B학점 입니다.\n", score);
	}
	else if (score < 80 && score >= 70) {
		printf("점수는 %d점이고, 학점은 C학점 입니다.\n", score);
	}
	else if (score< 70 && score >= 60) {
		printf("점수는 %d점이고, 학점은 D학점 입니다.\n", score);
	}
	else {
		printf("점수는 %d점이고, 학점은 F학점 입니다.", score);
	}
	}