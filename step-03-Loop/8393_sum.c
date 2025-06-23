#include <stdio.h>

int main()
{
int n;
int result=0;
int i;
scanf("%d",&n);

for(i=1;i<=n;i++){
    result=i+result;
}

printf("%d",result);

}