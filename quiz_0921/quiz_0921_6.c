#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the side length of the square (N) : ");
    scanf("%d",&n);
    printf("The difference between the areas is : %.2f",((1.414/2*n)*(1.414/2*n)-(n/2.0)*(n/2.0))*3.14);

    return 0;
}