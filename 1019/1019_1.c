#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n;
    printf("Please enter a number (0~100):");
    scanf("%d",&n);
    while (n<0||n>100)
    {
        printf("??????\n");
        printf("Please enter a number (0~100):");
        scanf("%d",&n);
    }
    
    printf("Output an even number less than %d:\n",n);
    int i;
    for (i = 0; i < n; i+=2)
        printf("%d is an even number\n",i);
    return 0;
}