#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void sortNumbers(int *a, int *b, int *c, int *d, int *e);

int main(void){
 	int i,j,num1,num2,num3,num4,num5;
 	srand(time(NULL));
 	printf("Random 5 numbers:");
 	num1=rand()%20+1;
 	num2=rand()%20+1;
 	num3=rand()%20+1;
 	num4=rand()%20+1;
 	num5=rand()%20+1;
 	printf(" %d %d %d %d %d\n",num1,num2,num3,num4,num5);
 	sortNumbers(&num1,&num2,&num3,&num4,&num5);
 	printf("Sorted: %d %d %d %d %d",num1,num2,num3,num4,num5);
 	return 0;
 }

void sortNumbers(int *a, int *b, int *c, int *d, int *e){
    int arr[5] = {*a, *b, *c, *d, *e};
    int n = 5,i,j;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    *a = arr[0];
    *b = arr[1];
    *c = arr[2];
    *d = arr[3];
    *e = arr[4];
}

