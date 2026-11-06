#include <stdio.h>
void Print_repeat()
    {
        for(int i=1;i<=10;i++)
        {
            printf("*");
        }
        printf("\n");
    }
int main()
{
    Print_repeat();
    Print_repeat();
    Print_repeat();
    return 0;
}