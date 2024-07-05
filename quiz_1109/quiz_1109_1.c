#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
    srand(time(0));
    int n,m;
    printf("Enter the value of N and M (1 < N, M < 10): ");
    while(scanf("%d %d",&n,&m)!=EOF){
        if(n==0&&m==0){
            printf("Finish!");
            return 0;
        }
        if(n<=1||m<=1||n>=10||m>=10)
            printf("Invalid Input: N and M must be between 2 and 9.\n");
        else{
            int a1[n][m],a2[m][n],i,j,k;
            printf("Matrix 1:\n");
            for(i=0;i<n;i++){
                for(j=0;j<m;j++){
                    a1[i][j]=rand()%2;
                    printf("%d ",a1[i][j]);
                }
                printf("\n");
            }
            printf("Matrix 2:\n");
            for(i=0;i<m;i++){
                for(j=0;j<n;j++){
                    a2[i][j]=rand()%2;
                    printf("%d ",a2[i][j]);
                }
                printf("\n");
            }
            printf("Resulting Matrix:\n");
            for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                    int sum=0;
                    for(k=0;k<m;k++){
                        sum+=(a1[i][k]*a2[k][j]);
                    }
                    printf("%d ",sum);
                }
                printf("\n");
            }
        }
        printf("Enter the value of N and M (1 < N, M < 10): ");
    }
    return 0;
}