#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand(time(NULL));
    int n=rand()%10+1;
    int m=rand()%10+1;
    printf("height: %d width: %d\n",n,m);
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
            printf("*");
        printf("\n");
    }
    return 0;
}