#include <stdio.h>
#include <stdlib.h> // system() 함수를 위해 추가!
#include <string.h> // 5단계 문자열을 다루기 위해 추가!

int main (void)
{

system("chcp 65001 > nul"); // 프로그램 시작과 동시에 터미널 언어 모드를 UTF-8로 변경 (가장 중요!)

int T;
int a;
int b;
int i;

scanf("%d",&T);

for(i=1;i<=T;i++){
    scanf("%d",&a);
    scanf("%d",&b);
    printf("Case #%d: %d + %d = %d\n",i,a,b,a+b);
}
}