#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	int time;

	printf("�ʸ� �Է��ϼ��� >>>");
	scanf("%d", &time);
	
	int h;
	int m;
	int s;
	int a;

	h = time / 3600;
	a = time % 3600;
	m = a / 60;
	s = a % 60;

	printf("��ȯ ����� %d�ð� %d�� %d�� �Դϴ�.", h, m, s);
	return 0;
}

