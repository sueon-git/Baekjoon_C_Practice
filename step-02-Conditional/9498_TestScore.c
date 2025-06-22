#include <stdio.h>
#include <stdlib.h> // system() 함수를 위해 추가!

int main (void)
{

system("chcp 65001 > nul"); // 프로그램 시작과 동시에 터미널 언어 모드를 UTF-8로 변경 (가장 중요!)


int a;
scanf("%d",&a);

if(90<=a&&a<=100){           ////// if(90<=a<=100) 으로 작성하면 안되는 이유 ////////////////////////////
    printf("A");}
else if(80<=a&&a<=89){
    printf("B");}
else if(70<=a&&a<=79){
    printf("C");}
else if(60<=a&&a<=69){
    printf("D");}
else {printf("F");}
}
