#include <stdio.h>
int main()
{
    int x,y;
    for(y=0;y>=-10;y--){
        for(x=0;x<=10;x++){
        printf("(%d,%d)",y,x);
    }
    printf("\n");
    }
    return 0;
}