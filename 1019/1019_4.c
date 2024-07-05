#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int n;
    srand(time(NULL));
    int r=rand()%10+1;
    printf("The number guessing game begins!\n");
    printf("Please enter a number (1~10): ");
    scanf("%d",&n);
    while (n!=r)
    {
        printf("You guessed wrong, please try again.\n");
        printf("Please enter a number (1~10): ");
        scanf("%d",&n);
    }
    printf("Congratulations! The answer is %d。",r);
    return 0;
}