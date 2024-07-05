#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
	char a[100];
	int i,j,k;
	while(fgets(a,100,stdin)!=NULL){
		for(i=0;i<100;i++){
			char c=a[i];
			if(c=='\n')
				break;
			if(c>='a'&&c<='c')
				printf("%c%d",c,c-'a'+1);
			else if(c<='f')
				printf("%c%d",c,c-'d'+1);
			else if(c<='i')
				printf("%c%d",c,c-'g'+1);
			else if(c<='l')
				printf("%c%d",c,c-'j'+1);
			else if(c<='o')
				printf("%c%d",c,c-'m'+1);
			else if(c<='s')
				printf("%c%d",c,c-'p'+1);
			else if(c<='v')
				printf("%c%d",c,c-'t'+1);
			else if(c<='z')
				printf("%c%d",c,c-'w'+1);
		}
		printf("\n");
	}
	return 0;
}
