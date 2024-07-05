#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c,X;
    printf("Enter the three positive integers a, b, and c: ");
    scanf("%d %d %d", &a, &b, &c);

    
    switch((b + c) < a)
    {
        case 1:
            printf("Not a triangle\n") ;
            break;
        default :
            switch ((b * b + c * c) == (a * a))
            {
            case 1:
                printf("Right Triangle\n");
                break;
            default:
                switch ((b * b + c * c) > (a * a))
                {
                case 1:
                    printf("Acute Triangle\n");
                    break;
                default:
                    printf("Obtuse Triangle\n");
                    break;
                }
            }
    }
    return 0;
}