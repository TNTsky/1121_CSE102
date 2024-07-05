#include <stdio.h>
#include <stdlib.h>

char* mystrstr(char* input, char* pattern) {
   char *a=input,*b=pattern,*pos=NULL;
   int ai=0,bi=0;
   while(a[ai]){
		if(a[ai]==b[bi]){
			ai++;bi++;
		}else{
			ai=ai-bi+1;
			bi=0;
		}
		if(b[bi]=='\0'){
			pos=a+ai;
			ai=ai-bi+1;
			bi=0;
		}
	}
   return pos;
}

int main(void) {
    char str[2048+1023+2];
    while(gets(str)!=EOF){
    	char s[2049],w[1024];
    	char *c=str;
    	int slen=0,wlen=0;
    	while(*c!=',')
    		s[slen++]=*c++;
    	c++;
		while(*c)
			w[wlen++]=*c++;
		s[slen]=w[wlen]='\0';
		char *pos=mystrstr(s,w);
		if(pos)
			printf("%d,%d\n",pos-s,pos-s+wlen-1);
		else
			printf("-1\n");
	}
    return 0;
}
