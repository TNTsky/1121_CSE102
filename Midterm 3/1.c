#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

char *getword(char *line,char *word){
	char *c=line;
	int i=0;
	while(*c&&isspace(*c))
		c++;
	while(*c&&!isspace(*c)){
		word[i++]=*c++;
	}
	word[i]='\0';
	if(i>0)
		return c;
	else
		return NULL;
}

int main(void){
	char str[1024][1024];
	int size=0,i;
	while((fgets(str[size++],1024,stdin))!=NULL);
	long long int max=0;
	for(i=0;i<size-1;i++){
		char *c=str[i];
		char word[1024];
		while(*c!='\n'){
			c=getword(c,word);
			if(atoll(word)){
				if(atoll(word)>max)
					max=atoll(word);
			}
		}
	}
	printf("%lld",max);
	return 0;
}
