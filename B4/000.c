#include <stdio.h>
void print(int n);
int main(){
    int n;
    printf("请输入一个整数；");
    scanf("%d",&n);
    print(n);
    return 0;
}
void print(int n)
{
    int x,y;
    for(x=1;x<=n;x++)
    {
        for(y=1;y<=x;y++)
        {
            printf("%d*%d=%d",y,x,x*y);
            printf("\t");
        }
        printf("\n");
    }
}