#include <stdio.h>
long long fibloop(int n);
int main(void)
{
    int n=0;
    printf("你想计算斐波那契数列的第几项？：");
    scanf("%d",&n);
    printf("斐波那契数列的第%d项是%lld",n,fibloop(n));
    return 0;
}
long long fibloop(int n)
{
    long long a=1,b=1,t=1;
    for(int i=3;i<=n;i++)
    {
        t=a+b;
        a=b;
        b=t;
    }
    return b;
}