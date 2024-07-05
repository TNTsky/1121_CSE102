#include<stdio.h>
#include<stdlib.h>

int main(void){
	int x,y;
	while (scanf("%d %d",&x,&y)!=EOF){
		if(x>y||x<0||y<0)
			printf("Invalid input\n");
		else{
			int i,j,T;
			for(i=x;i<=y;i++){
				T=1;
				for(j=2;j*j<i;j++){
					if(i%j==0){
						T=0;
						break;
					}
				}
				if(T==1)
					printf("%d\n",i);
			}
		}
	}
	printf("Finish!\n");
	return 0;
}
