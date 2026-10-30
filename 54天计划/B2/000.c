#include <stdio.h>
void print_line(int i)
{
    for(int n=1;n<=i;n++)
    {
        printf("^");
        printf("\n");
    }
}
void print_box(int width,int height)
{
    for(int x=1;x<=height;x++)
    {
        for(int y=1;y<=width;y++)
        {
            printf(":D");
        }
        printf("\n");
    }
}
int main()
{
    print_line(1);
    print_line(10);
    printf("\n");
    print_box(2,2);
    printf("\n");
    print_box(10,10);
}