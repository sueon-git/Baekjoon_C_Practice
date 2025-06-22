#include <stdio.h>
#include <stdlib.h> // system() 함수를 위해 추가!

int main (void)
{

system("chcp 65001 > nul"); // 프로그램 시작과 동시에 터미널 언어 모드를 UTF-8로 변경 (가장 중요!)

int a;
int b;
int c;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);

if(a==b && b==c){                        ///// =과 ==의 차이 확인 //////////////////
    printf("%d",10000+a*1000);}         

else if((a==b&&a!=c)||(a==c&&a!=b)){
    printf("%d",1000+a*100);}    
else if(b==c&&a!=b){
    printf("%d",1000+b*100);}

else if(a!=b&&a!=c&&a>b&&a>c){
    printf("%d",a*100);}     
else if(a!=b&&a!=c&&b>a&&b>c){
    printf("%d",b*100);}  
else if(a!=b&&a!=c&&c>a&&c>a){
    printf("%d",c*100);}
}

