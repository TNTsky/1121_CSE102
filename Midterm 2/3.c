#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
	char a[200];
	int i,j,k;
	while(fgets(a,200,stdin)!=NULL){
		char b[200];
		i=0;
		j=0;
		k=0;
		while(a[k]==' ')
			k++;
		for(i=k;i<200;i++){
			if(a[i]==' '){
				b[j++]=' ';
				i++;
				while(a[i]==' ')
					i++;
			}
			if(a[i]=='\n'){
				for(k=0;k<j;k++){
					printf("%c",b[k]);
				}
				printf("\n");
				break;
			}
			else{
				b[j++]=a[i];
			}
		}
	}
	return 0;
}
