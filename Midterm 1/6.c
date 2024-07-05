#include<stdio.h>
#include<stdlib.h>

int main(void){
	int n;
	printf("n = ");
	while (scanf("%d",&n)!=EOF){
		if(n==0)
			break;
		else if(n<1||n>44)
			printf("Invalid input\n");
		else{
			int x=n/2,i,j,sum=0;
			for(i=0;i<=x;i++){
				j=n-i*2;
				if(i==0||j==0)
					sum+=1;
				else{
					int m;
					float T=1;
					for(m=0;m<i;m++)
						T=T*(i+j-m)/(1+m);
					sum+=T;
				}
			}
			printf("Number of ways: %d\n",sum);
			}
		printf("n = ");
	}
	printf("Finish!\n");
	return 0;
}
