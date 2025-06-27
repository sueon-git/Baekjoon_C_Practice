#include <stdio.h>

int main()
{
int a;
int b;
int result;
int i;

 while(1){                      // 그냥 안배웠어도 여러번 눈에 띄웠었던 문구였음 //
    scanf("%d %d",&a,&b);     
    result=a+b;
    if(a==0&&b==0){break;}
    printf("%d\n",result);
}    
}