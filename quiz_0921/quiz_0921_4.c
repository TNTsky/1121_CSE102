#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n;
    scanf("%f,&n");
    printf("%10.1f\n",n);
    printf("%010.2f\n",n);
    printf("%+10.4f\n");
    printf("%.3f\n");

    return 0;
}