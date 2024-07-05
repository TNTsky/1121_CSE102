#include <stdio.h>
#include <ctype.h>

void getword(const char *str) {
    char word[50];  
    int index=0;
    while (*str) {
        while(isspace(*str))
            str++;
        while(*str && !isspace(*str))
            word[index++] = *str++;
        word[index] = '\0';
        if(index>0) {
            printf("%s\n",word);
            index=0;
        }
    }
}

int main(void) {
    char str[1024];
    while(fgets(str,1024,stdin)!=EOF)
    	getword(str);
    return 0;
}

