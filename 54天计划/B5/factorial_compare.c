#include <stdio.h>
int factloop(int n);
int factrec(int n);
int main(void)
{
    printf("%-4s%-9s%-9s\n","n","循环版","递归版");         //写成-4%s了
    for(int n=0;n<=10;n++)
    {
        printf("%-4d%-9d%-9d\n",n,factloop(n),factrec(n));
    }
    return 0;
}
int factloop(int n)
{
    int i=1;
    int r=1;
    for(i=2;i<=n;i++)
    {
        r=r*i;
    }
    return r;
}
int factrec(int n)
{
    if(n<=1)
    return 1;                   //这里老是写成0......
    return n*factrec(n-1);
}