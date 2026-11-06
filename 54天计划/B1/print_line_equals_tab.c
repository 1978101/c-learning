#include <stdio.h>
void Print_repeat()
{
    for(int i=1;i<=10;i++)
    {
        printf("=");
    }
}
void print_Tab()
{
    printf("\t");
}
int main()
{
    Print_repeat();
    print_Tab();
    Print_repeat();
    printf("\n");
    Print_repeat();
    Print_repeat();
    Print_repeat();
}