#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int x = 5;
    int *p;

    p = &x;

    printf("x�� �ʱⰪ: %d\n", x);
    
    *p = 10;

    printf("x�� ��: %d\n", x);
    printf("*p�� ��: %d\n", *p);

    return 0;
}