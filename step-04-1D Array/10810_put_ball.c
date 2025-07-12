#include <stdio.h>
#include <stdlib.h> // system() 함수를 위해 추가
#include <string.h> // 5단계 문자열을 다루기 위해 추가
#include <math.h> // 8단계 수학1 문제를 다루기 위해 필요

int main()
{

system("chcp 65001 > nul"); // 프로그램 시작과 동시에 터미널 언어 모드를 UTF-8로 변경 (가장 중요!)

int n; // 바구니 종류
int m; // 넣는횟수
scanf("%d",&n);
scanf("%d",&m);
int a[n];  // 바구니 종류
int p;
int q;
int r;
int i; // 넣을시작상자
int j; // 넣을끝상자
int k; // 넣을공번호
int o; // 배열 만들자마자 배열초기화(청소용) 변수

for(o=0;o<=n-1;o++){     /// 배열을 만든 직후에는 배열을 0으로 초기화 해주어야함 /////
    a[o]=0;}             /// 이것 때문에 몇시간을 날렸네 씁..... /////

for(r=1;r<=m;r++){  
    scanf("%d %d %d",&i,&j,&k);
    for(q=i;q<=j;q++){
     a[q-1]=k;                 // 됐다 :) 
    }   
}

for(p=0;p<=n-1;p++){
printf("%d ",a[p]);
}
}