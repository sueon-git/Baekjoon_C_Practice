#include <stdio.h>

int main()
{
int n;
scanf("%d",&n);
int a[n];
int i;
int x; 
int y; 

for(i=0;i<=n-1;i++){
scanf("%d",&a[i]);
}

x=a[0];
for(i=0;i<=n-2;i++){              // 요 부분 i<=n-1 하면 배열의 범위를 벗어나니 주의 //
    if(x<a[i+1]){
        x=x;
    }
    else {x=a[i+1];}
}
y=a[0];
for(i=0;i<=n-2;i++){
    if(y>a[i+1]){
        y=y;
    }
    else {y=a[i+1];}
}
    printf("%d %d",x,y);
}
