#include <stdio.h>
#include <stdlib.h> // system() 함수를 위해 추가!

int main (void)
{

system("chcp 65001 > nul"); // 프로그램 시작과 동시에 터미널 언어 모드를 UTF-8로 변경 (가장 중요!)


int a;
scanf("%d",&a);

if((a%4==0&&a%100!=0)||a%400==0){       /////// 이줄 왜 자꾸 에러 나는거지? ///////////////
    printf("1");}                      //////// 이 문제 한 일주일 후면 다시 안풀릴듯하니
else {printf("0");}                     /////// 일주일 후쯤 다시 풀어볼것 :) ////////
}
