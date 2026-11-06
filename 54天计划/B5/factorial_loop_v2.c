#include <stdio.h>
int fact(int n);
int main(void)
{
    int n=0;
    int result=0;
    printf("几的阶乘？：");
    scanf("%d",&n);
    result=fact(n);
    printf("%d",result);
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