#include <stdio.h>
#include <stdlib.h>

char* mystrstr(char* input, char* pattern) {
    char* lastOccurrence = NULL;
    while (*input != '\0') {
        char* current = input;
        char* patternPtr = pattern;
		while (*current == *patternPtr && *current != '\0' && *patternPtr != '\0') {
            current++;
            patternPtr++;
        }
		if (*patternPtr == '\0') {
            lastOccurrence = input;
        }
        input++;
    }
    return lastOccurrence;
}

int main(void) {
    char str[5000];
    while(fgets(str, sizeof(str), stdin)) {
        char S[2048], W[1024];
        int i = 0, s = 0, w = 0, c;
        while ((c = str[i]) != EOF && c != '\n') {
            while (c != ',' && c != '\n') {
                S[s++] = c;
                i++;
                c = str[i];
            }
            S[s] = '\0';
            while (c == ',') {
                i++;
                c = str[i];
            }
            while (c != '\n') {
                W[w++] = c;
                i++;
                c = str[i];
            }
            W[w] = '\0';
        }
        char* lastOccurrence = mystrstr(S, W);
        if (lastOccurrence != NULL) {
            int start = lastOccurrence - S;
            int end = start + w - 1;
            printf("%d,%d\n", start,end);
        } else {
            printf("-1\n");
        }
    }
    return 0;
}
