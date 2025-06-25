#include <stdio.h>

int main()
{
int n;                                    //*
int i;                                    //**
int j;                                    //***
scanf("%d",&n);                           //****

    for(i=1;i<=n;i++){                    ///// 나는 이렇게 코딩했는데 다른사람 혹은 실제는 어떻게 코딩했는지 비교해볼것 ///////
        for(j=1;j<i;j++){                 ///// 다른사람 코딩 내용과 비교 해볼것 ///////
            printf("*");
        }
        printf("*\n");  
    }
}