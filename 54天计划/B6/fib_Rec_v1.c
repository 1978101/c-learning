#include <stdio.h>
int fib(int n)
{
    if(n==1||n==2)
    {
        return 1;
    }
    return fib(n-1)+fib(n-2);
}
int main(void)
{
    int n =1;
    printf("计算斐波那契数列的第几项？：");
    scanf("%d",&n);
    printf("斐波那契数列的第%d项是%d",n,fib(n));
    return 0;
}