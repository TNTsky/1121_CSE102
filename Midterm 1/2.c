#include<stdio.h>
#include<stdlib.h>

int main(void){
	int n;
	printf("N = ");
	while (scanf("%d",&n)!=EOF){
		if(n==0)
			break;
		else if(n<0||n%2==0)
			printf("Please enter a valid number.\n");
		else{
			int i,j,k,l;
			for(i=n,j=0;i>1;i=i-2,j++){
				for(k=1;k<=j;k++)
					printf(" ");
				for(l=1;l<=i;l++)
					printf("*");
				printf("\n");
			}
			for(i=1,j=(n-1)/2;i<=n;i=i+2,j--){
				for(k=1;k<=j;k++)
					printf(" ");
				for(l=1;l<=i;l++)
					printf("*");
				printf("\n");
			}
		}
		printf("N = ");
	}
	printf("Finish!\n");
	return 0;
}
