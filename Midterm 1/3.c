#include<stdio.h>
#include<stdlib.h>

int main(void){
	double  n,m;
	while (scanf("%lf %lf",&n,&m)!=EOF){
		if(n==0&&m==0)
			break;
		else{ 
			double i,j,temp;
			i=(n>m)?n:m;
			j=(n>m)?m:n;
			while(j!=0){
				while(i>j)
					i-=j;
				temp=i;
				i=j;
				j=(int)temp;
			}
			printf("LCM of %lf and %lf is: %lf\n",n,m,n/i*m);
		}
	}
	printf("Finish!\n");
	return 0;
}
