#include<stdio.h>

int main(){
    int a=0,b=1,s=0,n;

    printf("enter a no:");
    scanf("%d",&n);

    while (s<=n)
    {
        printf("%d\n",a);
        s=a+b;
        a=b;
        b=s;

    }
    
}