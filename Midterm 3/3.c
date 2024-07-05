#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

char *getword(char *line,char *word){
	char *c=line;
	int i=0;
	while(*c&&isspace(*c))
		c++;
	while(*c&&!isspace(*c)&&*c!='\n'){
		word[i++]=*c++;
	}
	word[i]='\0';
	if(i>0)
		return c;
	else
		return NULL;
}

int main(void){
	char str[1000];
	int size=0,num=0,i,j;
	fgets(str,1000,stdin);
	char *c=str;
	char word[500];
	char dword[1000][1000];
	while(*c!='\n'){
		int new=1;
		c=getword(c,word);
		j=0;
		while(word[j]){
			word[j]=tolower(word[j]);
			j++;
		}
		for(i=0;i<num;i++){
			word[j]='\0';
			if(strcmp(dword[i],word)==0){
				new=0;
				break;
			}
		}
		if(new){
			strcpy(dword[num++],word);
		}	
	}
	printf("Number of terms in the dictionary is %d\n\n",num);
	return 0;
}
