#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void permute(int *arr, int start, int end) {
    int i;
    if (start == end) {
        for (i = 0; i <= end; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        for (i = start; i <= end; i++) {
            swap((arr + start), (arr + i));
            permute(arr, start + 1, end);
            swap((arr + start), (arr + i));
        }
    }
}

 int main(void){
 	int n,i;
 	printf("Enter a positive integer (1 <= n <= 10): ");
 	while(scanf("%d",&n)!=EOF){
 		if(n==0)
 			break;
 		printf("All permutation of 1 to %d :\n",n);
 		int a[n];
 		for (i = 0; i < n; i++) {
	        a[i] = i + 1;
	    }
	    permute(a, 0, n - 1);
 		printf("Enter a positive integer (1 <= n <= 10): ");
	}
	printf("Finish!");
 	return 0;
 }
