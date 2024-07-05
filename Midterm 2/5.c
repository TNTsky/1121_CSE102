#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int prime(int a){
	int i;
	if(a<=1)
		return 0;
	for(i=2;i*i<=a;i++){
		if(a%i==0)
			return 0;
	}
	return 1;
}

int main(void){
	while(1){
		int a[1024],p[1024]={0},P=0;
		int i,j,k,size=0;
		printf("Input Array: ");
		while((scanf("%d",&a[size]))!=EOF){
			size++;
		}
		for(i=0;i<size;i++){
			if(prime(a[i])){
				p[P++]=i;
			}
		}
		printf("Prime sorted Arrary: ");
		for(i=0;i<size;i++){
			if(prime(a[i])){
				printf("%d ",a[p[--P]]);
			}
			else{
				printf("%d ",a[i]);
			}
		}
		printf("\n\n");
	}
	return 0;
}
