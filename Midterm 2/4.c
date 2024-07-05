#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
	char a[40];
	int i,j,k;
	while(fgets(a,40,stdin)!=NULL){
		int e[40]={0},E=0,n=-1;
		for(i=0;i<40;i++){
			if(a[i]=='\n')
				break;
			if(a[i]=='0'&&n==-1){
				e[i]=-1;
			}
			else if(a[i]<'0'||a[i]>'9'){
				e[i]=1;
				E++;
			}
			else
				n++;
		}
		if(E==1){
			printf("Panic: %d Error was detected.\n",E);
			puts("The input has following invalid character:");
			j=0;
			for(i=0;i<40;i++){
				if(e[i]){
					j++;
					printf("[%d] Positition: %d, Invalid character: %c\n",j,i+1,a[i]);
				}
				if(j==E)
					break;
			}
			printf("Repaired result is ");
			for(i=0;i<40;i++){
				if(a[i]=='\n')
					break;
				if(e[i]==0){
					printf("%c",a[i]);
				}
			}
			puts(".\n---");
		}
		else if(E){
			printf("Panic: %d Errors were detected.\n",E);
			puts("The input has following invalid characters:");
			j=0;
			for(i=0;i<40;i++){
				if(e[i]){
					j++;
					printf("[%d] Positition: %d, Invalid character: %c\n",j,i+1,a[i]);
				}
				if(j==E)
					break;
			}
			printf("Repaired result is ");
			for(i=0;i<40;i++){
				if(a[i]=='\n')
					break;
				if(e[i]==0){
					printf("%c",a[i]);
				}
			}
			puts(".\n---");
		}
		else{
			printf("Parsing successfully: ");
			for(i=0;i<40;i++){
				if(a[i]=='\n')
					break;
				if(e[i]==0){
					printf("%c",a[i]);
					n--;
				}
			}
			printf("\n");
		}
	}
	return 0;
}

