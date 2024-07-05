#include <stdio.h>
#include <stdlib.h>

int main(void){
    int x,y;
    while (scanf("%d\n%d",&x,&y)!=EOF){
        printf("x+y=%d\nx-y=%d\nx*y=%d\n",x+y,x-y,x*y);
        (y==0)?printf("error\n"):printf("x/y=%f\n",(float)x/y);
    }
    return 0;
}