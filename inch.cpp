// inch.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
// 
// inch -> cm
// yard -> mm
// cm -mm
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

double getcm(int num)  { //inch ->cm
    double cm =num * 2.54;

    return cm;
}
double getmm(double cm) { // cm -> mm
    double mm = cm * 10;

    return mm;


}
double getyard(double mm) { // yard -> mm
    double yard =  mm *0.001094;

    return yard;


}

int main()
{
    int num;
    printf("인치 입력"); //inch 라고하면
    scanf("%d",&num);
    double cm =getcm(num);
    printf("%f\n", cm);
    double mm = getmm(cm);
    printf("%f\n",mm);
    double yard = getyard(mm);
    printf("%f\n", yard);



 return 0;
    }

