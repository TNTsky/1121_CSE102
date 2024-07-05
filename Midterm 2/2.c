#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(void){
	char a[1024];
	int i,j,k;
	while(1){
		int cor=0;
		while(fgets(a,1024,stdin)!=NULL){
			char c=a[i];
			float num=0,ans=0;
			int status=1;
			for(i=0;i<1024;i++){
				c=a[i];
				if (c=='+'){
					status=1;
					i+=2;
					c=a[i];
				}
				if(c=='-'){
					status=-1;
					i+=2;
					c=a[i];
				}
				if(c=='='){
					i+=2;
					c=a[i];
					if(c=='-'){
						ans=0-ans;
						i++;
						c=a[i];
					}
				}
				while('0'<=c&&c<='9'){
					num=num*10+c-'0';
					if(a[i+1]=='.'){
						i=i+2;
						c=a[i];
						int d=1;
						while('0'<=c&&c<='9'){
							float t=1;
							for(j=1;j<d;j++)
								t/=10;
							num+=t*(c-'0');
							if(a[i+1]<'0'||a[i+1]>'9')
								break;
							i++;
							d++;
							c=a[i];
						}
					}
					else if(a[i+1]<'0'||a[i+1]>'9')
						break;
					i++;
					c=a[i];
				}
				if(a[i+1]=='\n'){
					if(ans==num)
						cor++;
					num=0;
					ans=0;
					continue;
				}
				if(status==1){
					ans+=num;
					status=0;
				}
				else if (status==-1){
					ans-=num;
					status=0;
				}
				num=0;
			}
		}
		printf("Correct : %d\n",cor);
	}
	return 0;
}
