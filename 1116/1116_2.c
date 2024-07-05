#include<stdio.h>
#include<stdlib.h>

int main(void){
    char c[100];
    printf("Enter a string: ");
    scanf("%s",c);
    printf("Using printf() and scanf():\n");
    int i;
    for(i=0;i<3;i++)
        printf("%s\n",c);

    fflush(stdin);
    printf("Enter a string: ");
    gets(c);
    puts("Using puts() and gets():");
    for(i=0;i<3;i++){
        puts(c);
    }

}
