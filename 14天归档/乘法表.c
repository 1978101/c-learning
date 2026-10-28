#include <stdio.h>
int main(){
    int x;
    int y;
    for(x=1;x<=9;x++){
        for(y=1;y<=x;y++){
        printf("%d*%d=%d\t",y,x,x*y);
    }
    printf("\n");
    }
    
    return 0;
}