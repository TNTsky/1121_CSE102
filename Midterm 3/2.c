#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

typedef struct node{
	int chi;
	int eng;
	int math;
	int phy;
	int soc;
}Score;

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

void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}


void sorting(int *d,int *sum,int n){
	if(n==1){
		return;
	}
	int i;
	for(i=0;i<n-1;i++){
		if(sum[i]<sum[i+1]){
			swap(&sum[i],&sum[i+1]);
			swap(&d[i],&d[i+1]);
		}
	}
	sorting(d,sum,n-1);
}


int main(void){
	Score score[10];
	int size=0,i,j;
	int sum[10]={0};
	int d[10];
	for(i=0;i<10;i++){
		d[i]=i;
	}
	char str[100];
	while((fgets(str,100,stdin))!=NULL){
		i=0;
		char *c=str;
		char word[10];
		while(c&&*c!='\n'){
			c=getword(c,word);
			if(atoi(word)){
				switch(i){
					case 0:
						score[size].chi=atoi(word);
						break;
					case 1:
						score[size].eng=atoi(word);
						break;
					case 2:
						score[size].math=atoi(word);
						break;
					case 3:
						score[size].phy=atoi(word);
						break;
					case 4:
						score[size].soc=atoi(word);
						break;
				}
				i++;
				sum[size]+=atoi(word);
			}
		}
		while(i<5){
			switch(i){
				case 0:
					score[size].chi=atoi(word);
					break;
				case 1:
					score[size].eng=atoi(word);
					break;
				case 2:
					score[size].math=atoi(word);
					break;
				case 3:
					score[size].phy=atoi(word);
					break;
				case 4:
					score[size].soc=atoi(word);
					break;
			}
			i++;
		}
		size++;
	}
	sorting(d,sum,size);
	for(i=0;i<size;i++){
		printf("%d %d %d %d %d\n",score[d[i]].chi,score[d[i]].eng,score[d[i]].math,score[d[i]].phy,score[d[i]].soc);
	}
	return 0;
}
