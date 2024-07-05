#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the number of seconds (N) : ");
    scanf("%d",&n);
    printf("%d seconds is equal to: %d days, %d hours, %d minutes, %d seconds.",n,n/86400,n/3600%24,n/60%60,n%60);

    return 0;
}