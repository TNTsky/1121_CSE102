#include <stdio.h>
#include <stdlib.h>

int main(void){
    int input,sum=0;
    printf("Please enter some integers and use EOF to end input:\n");
    while (scanf("%d",&input)!=EOF)
        sum+=input;
    printf("The total sum of entered integers is: %d",sum);
    return 0;
}