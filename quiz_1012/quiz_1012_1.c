#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b,c,d,e,f;
    printf("Enter five integers:\n");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

    f = a;
    if (b > f) f = b;
    if (c > f) f = c;
    if (d > f) f = d;
    if (e > f) f = e;


    printf("From %d, %d, %d, %d, %d, the maximum number is : %d",a,b,c,d,e,f);

    return 0;
}
