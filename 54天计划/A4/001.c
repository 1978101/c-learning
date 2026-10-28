#include <stdio.h>
int main()
{
    double num_1,num_2;
    char op;
    printf("输入式子：");
    scanf("%lf %c %lf",&num_1,&op,&num_2);
    switch(op)
    {
        case '+':
            printf("%f%c%lf=%f\n",num_1,op,num_2,num_1+num_2);
            break;
        case '-':
            printf("%f%c%f=%f\n",num_1,op,num_2,num_1-num_2);
            break;
        case '*':
            printf("%f%c%f=%f\n",num_1,op,num_2,num_1*num_2);
            break;
        case '/':
        if(num_2==0)
        {
            printf("分母不为零！");
        }
        else
        {
            printf("%f%c%f=%f\n",num_1,op,num_2,num_1/num_2);
            break;
        }
        
        default :printf("不支持此运算\n");break;
    }
    return 0;
}