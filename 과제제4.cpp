// fghdfg.c.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include<time.h>
#include<stdlib.h>

//scanf("%d %d %d",jumo , gawi ,bo);
int main(void)
{
    srand((unsigned)time(NULL));
    int user;
    int computer = rand() % 3 + 1; //1~3
        printf("1.주먹 2.가위 3. 보");
        scanf("%d", &user);
        user == 1 ? "주먹" : user == 2 ? "가위" : "보";
         computer == 1 ? "가위" : computer == 2 ? "바위" : "보";
   
    if (computer == user)
    {
        printf("사용자 : %s .\n\n", (user == 1 ? "주먹" : user == 2 ? "가위" : "보"));
        printf("컴퓨터 : %s\n\n", (computer == 1 ? "가위" : computer == 2 ? "바위" : "보"));
        printf("무승부입니다.");
  }
    else  if ((user == 1 && computer == 2) || (user == 3 && computer == 1) || (user == 2 && computer == 3)) { //이기는경우

        printf("사용자 : %s .\n\n", (user == 1 ? "주먹" : user == 2 ? "가위" : "보"));
        printf("컴퓨터 : %s\n\n", (computer == 1 ? "주먹" : computer == 2 ? "가위" : "보"));
        printf("승리했습니다.");
     }
    else {
        printf("사용자 : %s .\n\n", (user == 1 ? "주먹" : user == 2 ? "가위" : "보"));
        printf("컴퓨터 : %s\n\n", (computer == 1 ? "주먹" : computer == 2 ? "가위" : "보"));
        printf("패배했습니다.");
    }
    


   

    return 0;
}

