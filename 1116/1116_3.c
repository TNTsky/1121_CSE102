#include<stdio.h>
#include<stdlib.h>

int main(void){
    char c[1024];
    printf("Please input a string: ");
    while(fgets(c, 1024, stdin)!=NULL){
        int i=0;
        while(c[i]!='\n'){
            i++;
        }
        printf("Input string length is: %d\n",i);
        printf("Please input a string: ");
    }
}
