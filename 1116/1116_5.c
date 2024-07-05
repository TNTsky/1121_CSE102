#include<stdio.h>
#include<stdlib.h>

int main(void){
    char buffer[10][1024];
    int size=0;
    while(fgets(buffer[size], 1024, stdin)!=NULL){
        size++;
    }
    int i,j,t;
    for(i=0;i<size;i++){
        t=1;
        int len=strlen(buffer[i])-1;
        for(j=0;j<len/2-1;j++)
            if(buffer[i][j]!=buffer[i][j+len/2+1]);
                t=0;
        if(t)
            printf("%s\n",buffer[i]);
    }
    
}
