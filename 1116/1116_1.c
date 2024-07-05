#include<stdio.h>
#include<stdlib.h>

int main(void){
    char s[]="I am Groot";
    printf("The entire string: %s\n",s);
    printf("Character by character:\n");
    int i;
    for(i=0;i<sizeof(s)/sizeof(s[0])-1;i++)
        printf("The %d character is %c.\n",i,s[i]);
    return 0;
}