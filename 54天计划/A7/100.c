#include <stdio.h>
int main()
{
    int x,y;
    printf("你想判断哪个范围里的素数？\n");
    printf("请输入（x-y):");
    scanf("%d-%d",&x,&y);
    if(x<1)
    {
        printf("请输入大于等于1的正整数");
        return 0;
    }
    else if(x==1)
    {
        x+=1;
    }
    for(int n=x;n<=y;n++)
    {
        int isprime=1;
        for(int m=2;m<n;m++)
        {
            if(n%m==0)
            {
                isprime=0;
                break;
            }
        }
        if(isprime==1)
        {
            printf("%d ",n);
        }
        
    }
    printf("\n");
    return 0;
}