#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{

	int x, y;

	printf("x y 좌표를 입력하세요");
	scanf("%d %d", &x, &y);
	if (x > 0) {  // 1 or 4
		if (y > 0) {
			printf("1사분면입니다.");
		}
		if (y < 0) {
			printf("4사분면입니다.");
		}
	}
	if (x < 0) { // 2 or 3
		if (y > 0) {
			printf("2사분면입니다.");
		}
		if (y < 0) {
			printf("3사분면입니다.");
		}
	}






	return 0;
}

