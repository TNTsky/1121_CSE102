#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf("Enter the three positive integers a, b, and c: ");
    scanf("%d %d %d", &a, &b, &c);

    ((b + c) < a) ? printf("Not a triangle\n") :
        ((b * b + c * c) == (a * a)) ? printf("Right Triangle\n") :
        ((b * b + c * c) > (a * a)) ? printf("Acute Triangle\n") :
        printf("Obtuse Triangle\n");

    return 0;
}