#include <stdio.h>
int main(void)
{
    int n=1,s1,s;
    printf("请输入：");
    scanf("%d",&n);
    for(n;n>0;n=n/10)
    {
        s=n%10;
        s1=s+s1;
    }
    printf("%d",s1);
    return 0;
}