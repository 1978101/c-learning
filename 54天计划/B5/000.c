#include <stdio.h>
int fact(int n);
int main(void)
{
    int n=0;
    printf("几的阶乘？：");
    scanf("%d",&n);
    int fact(n);
}
int fact(int n)
{
    int i=1;
    for(int ii=2;ii<=n;ii++)
    {
        i=i*ii;
    }
    return i;
}