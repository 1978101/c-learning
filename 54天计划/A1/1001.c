#include <stdio.h>
int main()
{
    int a;
    printf("Please enter your score:");
    scanf("%d",&a);
    if(a>=90){
        printf("excellent");
    }
    else if(a>=80){
        printf("good");
    }
    else if(a>=70){
        printf("average");
    }
    else if(a>=60){
        printf("poor");
    }
    else{
        printf("fail");
    }
    return 0;
}