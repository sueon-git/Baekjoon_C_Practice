#include <stdio.h>
#include <stdlib.h> // system() 함수를 위해 추가!

int main (void)
{

system("chcp 65001 > nul"); // 프로그램 시작과 동시에 터미널 언어 모드를 UTF-8로 변경


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////// 백준, A-B, 250616 ///////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int a;
int b;
scanf("%d",&b);
scanf("%d",&a);
 
printf("%d",b-a);

}
