#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 32767;
    short s = 32767;

    printf("整數i = %d\n短整數s = %d\ni+1 = %d\ns+1 = %d\n", i, s, i + 1, (short)(s + 1));

    return 0;
}