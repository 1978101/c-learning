#include <stdio.h>
int main(){
    int x,y,z;
    printf("你想要几到几的乘法表？请输入:x-y\n");
    scanf("%d-%d",&x,&y);
    for(x;x<=y;x++){
        for(z=x;z<=9;z++){
            printf("%d*%d=%d\t",x,z,z*x);
        }
        printf("\n");
    }
    return 0;
}