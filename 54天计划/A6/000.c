#include <stdio.h>
int main()
{
    int choice,x,y;
    do
    {
        printf("===这是一个菜单===\n");
        printf("1.打印乘法表\n");
        printf("2.退出\n");
        printf("请选择；");
        scanf("%d",&choice);
        if(choice==1)
        {
            for(x=1;x<10;x++)
            {
                for(y=1;y<=x;y++)
                {
                    printf("%d*%d=%d\t",y,x,x*y);
                }
                printf("\n");
            }
        }
        else if(choice==2)
        {
            printf("已退出\n");
            break;
        }
        else
        {
            printf("没有这个选项！╮(╯▽╰)╭\n");
            printf("再输入一遍吧！\n");
        }
    }
    while(1);
    return 0;
}