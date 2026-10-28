#include <stdio.h>
int main()
    {
        int num ;
        printf("验证是不是素数。\n");
        printf("请输入一个数：");
        scanf("%d",&num);
        int isprime=1;
        if(num<=1 || scanf("%d",&num)!=1)
        {
            printf("输入出错，请输入大于等于1的正整数。");
            return 0;
        }
        for(int i=2;i<num;i++)
        {
            if(num%i==0)
            {
                isprime=0;
                break;
            }
        }
        if(isprime==0)
        {
            printf("%d不是素数",num);
        }
        else
        {
            printf("%d是素数",num);
        }
        return 0;
    }
