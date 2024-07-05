#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n;
    printf("Please enter the number of layers: ");
    scanf("%d",&n);
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++)
            printf("*");
        printf("\n");
    }
    return 0;
}