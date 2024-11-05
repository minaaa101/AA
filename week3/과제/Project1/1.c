#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	int time;

	printf("초를 입력하세요 >>>");
	scanf("%d", &time);
	
	int h;
	int m;
	int s;
	int a;

	h = time / 3600;
	a = time % 3600;
	m = a / 60;
	s = a % 60;

	printf("변환 결과는 %d시간 %d분 %d초 입니다.", h, m, s);
	return 0;
}

