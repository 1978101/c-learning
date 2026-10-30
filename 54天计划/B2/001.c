#include <stdio.h>
void print_line(int i)
{
    for(int n=1;n<=i;n++)
    {
        printf("^");
        printf("\n");
    }
}
void print_box(int width,int height,char c)
{
    for(int x=1;x<=height;x++)
    {
        for(int y=1;y<=width;y++)
        {
            printf("%c",c);
        }
        printf("\n");
    }
}
int main()
{
    int width,height;
    char c;
    printf("请输入width height char：");
    scanf("%d %d %c",&width,&height,&c);
    print_line(1);
    print_line(10);
    printf("\n");
    print_box(width,height,c);
    printf("\n");
    print_box(width,height,c);
    return 0;
}