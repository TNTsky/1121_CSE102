#include<stdio.h>
#include<stdlib.h>
#include<time.h>

float mymean(int *a, int len);

int main(void){
 	int a[5],len=5;
 	int i,j;
 	srand(time(NULL));
 	printf("Generated array:");
 	for(i=0;i<len;i++){
 		a[i]=rand()%11*10;
 		printf(" %d",a[i]);
	}
 	float m = mymean(a,len);
 	printf("\n\nMean: %.1f\n\n",m);
 	printf("The address of Mean is: %p",&m);
 	return 0;
 }
 
 float mymean(int *a, int len){
 	float sum=0;
 	int i;
 	for(i=0;i<5;i++)
 		sum+=a[i];
 	return sum/len;
 }
