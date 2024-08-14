#include<stdio.h>
#include<string.h>

int main(){
   ;
    int n=0 , a,r,result=0,b;

    printf("enter any digit:");
    scanf("%d",&a);
    b=a;

    for (int i = a; i !=0; ++n)
    {
        i/=10;
    }

    while (a!=0)
    {
        r=a%10;
        result+=r;
        a/=10;
    }

    printf("sum of all digits of %d = %d ",b,result);
    
    

    
    


}