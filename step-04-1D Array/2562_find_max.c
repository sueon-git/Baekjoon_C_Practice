#include <stdio.h>
#include <stdlib.h> // system() 함수를 위해 추가!
#include <string.h> // 5단계 문자열을 다루기 위해 추가!

int main()
{

system("chcp 65001 > nul"); // 프로그램 시작과 동시에 터미널 언어 모드를 UTF-8로 변경 (가장 중요!)

int a[9];           
int i;
int x;
int y;

for(i=0;i<=8;i++){
    scanf("%d",&a[i]);
}

x=a[0];
y=1;
for(i=1;i<=8;i++){
    if(x<a[i]){
        x=a[i];
        y=i+1;
    }
    else if(x>=a[i]){
        x=x;
        y=y;
    }
}
printf("%d %d",x,y);
}