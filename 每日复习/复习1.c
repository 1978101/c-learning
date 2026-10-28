#include <stdio.h>
int main(){
    int x,y;
    printf("你想要几到几的乘法表？请输入：x-y\n");
    scanf("%d-%d",&x,&y);
    for(int m=x;m<=9;m++){
        for(int n=x;n<=m&&n<=y;n++){
            printf("%d*%d=%d\t",n,m,m*n);
        }
        printf("\n");
    }
    return 0;
}
