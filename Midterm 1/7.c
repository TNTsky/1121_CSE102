#include<stdio.h>
#include<stdlib.h>

int main(void){
	int n,num,time=0,reset=1;
	while (scanf("%d",&n)!=EOF){
		time=(time+1)%4;
		if(reset){
			reset=0;
			num=n;
			time=0;
			printf("(State RST) => %d\n",num);
		}
		else{
			switch(time){
				
				case 1:
					num+=n;
					printf("(State ADD) => %d\n",num);
					break;
				case 2:
					num-=n;
					printf("(State SUB) => %d\n",num);
					break;
				case 3:
					num*=n;
					printf("(State MUL) => %d\n",num);
					break;
				case 0:
					if(num==0){
						printf("(State DIV) => division by zero => reset\n");
						reset=1;
					}
					else{
						num=n/num;
						printf("(State DIV) => %d\n",num);
					}
					break;
			}	
		}
	}
	printf("Finish!\n");
	return 0;
}
