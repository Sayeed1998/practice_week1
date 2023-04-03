#include<stdio.h>
int main ()
{
    int a,b,sum,sub,mul,mod;
    float div;
    scanf("%d %d",&a,&b);
    printf("%d+%d=%d \n",a,b,(sum=a+b));
    printf("%d-%d=%d \n",a,b,(sub=a-b));
    printf("%d*%d=%d \n",a,b,(mul=a*b));
    printf("%d/%d=%0.2f \n",a,b,(div=(a*1.0)/b));
    printf("%d%%%d=%d \n",a,b,(mod=a%b));



    return 0;
}