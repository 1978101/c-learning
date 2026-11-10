#include <stdio.h>
#define N 5
int main(void)
{
    int sum[N];
    int add=0;
    printf("输入五个成绩：");
    for(int i=0;i<N;i++)
    {
        scanf("%d",&sum[i]);
    }
    for(int i=0;i<N;i++)
    {
        add = sum[i] + add;
    }
    double result = (double)add/N;
    printf("总分：%d\n",add);
    printf("平均分：%.2f\n",result);
    return 0;
}