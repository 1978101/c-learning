#include <stdio.h>
long long fib(int n)        /*这里如果是int的话，数字太大溢出了就会绕回去变成负数所以改成long long就能完整地生成出来了*/                           
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
    printf("斐波那契数列的第%d项是%lld",n,fib(n));
    return 0;
}