#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d,m,y;
    printf("Please enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d",&d,&m,&y);
    printf("The output date is : %d/%d/%d",y,m,d);
    return 0;
}