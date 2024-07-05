#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int n,r,sum=0;
    srand(time(NULL));
    printf("Enter the number of random numbers to generate: ");
    scanf("%d",&n);
    while (n<1||n>500)
    {
        printf("??????\n");
        printf("Please enter a number (0~100):");
        scanf("%d",&n);
    }
    printf("Random numbers: \n");
    r=rand()%500+1;
    printf("The first random number %d\n",r);
    sum+=r;
    r=rand()%500+1;
    printf("The second random number %d\n",r);
    sum+=r;
    r=rand()%500+1;
    printf("The third random number %d\n",r);
    sum+=r;
    int i;
    for (i = 3; i <= n; i++){
        r=rand()%500+1;
        printf("The %dth random number %d\n",i,r);
        sum+=r;
    }
    printf("The sum is: %d",sum);
    return 0;
}