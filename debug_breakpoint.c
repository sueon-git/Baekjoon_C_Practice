#include <stdio.h>
#include <stdlib.h> // system() 함수를 위해 추가
#include <string.h> // 5단계 문자열을 다루기 위해 추가
#include <math.h> // 8단계 수학1 문제를 다루기 위해 필요

int main()
{

system("chcp 65001 > nul"); // 프로그램 시작과 동시에 터미널 언어 모드를 UTF-8로 변경 (가장 중요!)
int a;

a=5;                        // debug 기능 //
a=6;                        // breakpoint 위치와 stepover 명령에 따른 변수 실시간 상태 변화 확인 가능 //
a=7;
a=8;
a=9;
a=10;

printf("%d ",a);            // continue (F5) 명령시, 그 다음 breakpoint까지 실행 //
printf("%d \n",a-1);
printf("*\n");              // stepover (F10) 명령시, 한줄씩 실행되어 실시간 동작 확인 가능 //
printf("**\n");
printf("***\n");
printf("****\n");
printf("*****\n");
}