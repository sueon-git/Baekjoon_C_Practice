#include <stdio.h>

int main()
{
int n;
int a;
int b;
int i;
scanf("%d",&n);

for(i=1;i<=n;i++){
    scanf("%d %d",&a,&b);
    printf("%d\n",a+b);
}

}