#include <stdio.h>

int main()
{
    int choice;
    
    while (1) 
    {
        printf("\n===这是一个菜单===\n");
        printf("1.打印乘法表\n");
        printf("2.退出\n");
        printf("3.打印 1 到 100 的素数\n");
        printf("请选择：");

        // 【关键修复】判断 scanf 的返回值
        // 如果成功读到一个整数，返回 1；如果失败（比如输入了字母），返回 0。
        if (scanf("%d", &choice) != 1) 
        {
            printf("====警告：请输入数字！====\n");
            
            // 【关键修复】吃掉缓冲区里捣乱的字母，直到遇到回车换行符为止
            while (getchar() != '\n'); 
            
            continue; // 跳过本次循环，重新打印菜单
        }

        // 下面的逻辑和之前一样
        if (choice == 2) {
            printf("已退出\n");
            return 0;
        }

        switch(choice)
        {
            case 1: // 乘法表代码... 
                for(int x=1;x<10;x++)
            {
                for(int y=1;y<=x;y++)
                {
                    printf("%d*%d=%d\t",y,x,x*y);
                }
                printf("\n");
            }
                break;
            case 3: // 素数代码...
                printf("1 到 100 的素数有：\n");
            for (int i = 2; i <= 100; i++) // 1 不是素数，从 2 开始
            {
                int is_prime = 1; // 假设当前数字 i 是素数 (1代表真)
                
                for (int j = 2; j < i; j++) 
                {
                    if (i % j == 0) // 如果能被除了 1 和自身之外的数整除
                    {
                        is_prime = 0; // 不是素数
                        break;        // 【关键】立刻跳出内层 for 循环，不再继续除
                    }
                }
                
                if (is_prime == 1) 
                {
                    printf("%d ", i);
                }
            }
            printf("\n"); // 打印完换行
                break;
            default:
                printf("没有这个选项！╮(╯▽╰)╭\n");
                break;
        }
    }
    return 0;
}
//和数学的排列组合问题一样，先想特殊情况，把特殊情况排除在外之后再按套路去写普通情况！！