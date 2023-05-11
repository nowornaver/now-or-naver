// ssss.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int sosu(int x) {

	for (int i = 2; i < x; i++) {
		if (x %i  == 0) {
			return printf("소수아님"); // 소수아님
		}
		else {
			return printf("소수임");
		}
	}
}
int main(void)
{
	int x;
	
	printf("숫자를 입력하세요");
	scanf("%d", &x); //5입력
	sosu(x);




	return 0;
}

