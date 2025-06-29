#include <stdio.h>

int main()
{
int b;
int c;
int i;
int j;
int sum=0;

scanf("%d",&b);
int a[b];

for(i=0;i<=b-1;i++){
    scanf("%d",&a[i]);
    }
scanf("%d",&c);

for(j=0;j<=b-1;j++){
    if(c==a[j]){
        sum=sum+1;}
}

printf("%d",sum);

}

