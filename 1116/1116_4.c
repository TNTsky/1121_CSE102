#include<stdio.h>
#include<stdlib.h>

int main(void){
    char c[5][100];
    int size=0;
    printf("Enter a sseries of strings:\n");
    while(fgets(c[size], 1024, stdin)!=NULL){
        size++;
        if(size>4)
            break;
    }

    int i;
    printf("Reversed order:\n");
    for(i=size-1;i>=0;i--){
        c[i][strlen(c[i])-1]='\0';
        puts(c[i]);
    }
}
