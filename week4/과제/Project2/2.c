#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char name[10];
    char number[15];

    
    printf("�̸��� �Է��ϼ��� >>> ");
    scanf("%9s", name); 

  
    printf("�й��� �Է��ϼ��� >>> ");
    scanf("%14s", number); 


    printf("�̸�: %s, �й�: %s\n", name, number);

    return 0;
}