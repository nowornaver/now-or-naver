// 1234.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int x;
    printf("정수를 입력하세요");
    scanf("%d", &x);

    for (int i = 1; i <= x; i++) {
        if (i %x  == 0) {
            printf(" %d", i);
        }



    }














    return 0;
}


