#include<stdio.h>
int main()
{
    int a,b;
    float dvd;
    scanf("%d %d",&a,&b);
    int sum=a+b;
    printf("%d+%d=%d\n",a,b,sum);
    int mns=a-b;
    printf("%d-%d=%d\n",a,b,mns);
    int mul=a*b;
    printf("%d*%d=%d\n",a,b,mul);
    dvd =a*1.0/b;
    printf("%d/%d=%.2f\n",a,b,dvd);
    return 0;

}