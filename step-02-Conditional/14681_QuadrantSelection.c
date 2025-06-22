#include <stdio.h>
#include <stdlib.h> // system() 함수를 위해 추가!

int main (void)
{

system("chcp 65001 > nul"); // 프로그램 시작과 동시에 터미널 언어 모드를 UTF-8로 변경 (가장 중요!)


int a;
int b;
scanf("%d",&a);
scanf("%d",&b);

if(a>0&&b>0){printf("1");}
else if(a<0&&b>0){printf("2");}
else if(a<0&&b<0){printf("3");}
else if(a>0&&b<0){printf("4");}
}