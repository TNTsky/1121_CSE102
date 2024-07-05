#include<stdio.h>
#include<stdlib.h>

int main(void){
	double n,m;
	while (scanf("%lf %lf",&n,&m)!=EOF)
		printf("%.0lf\n",n*m);
	return 0;
}
