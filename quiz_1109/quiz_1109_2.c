#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
    int a[1024],i,n=-1;
    while(1){
    	while(scanf("%d",&i)!=EOF){
	    	n++;
	    	a[n]=i;
		}
		if(n*a[n]==0){
			printf("Finish!");
			return 0;
		}
	    int l=0,r=n,mid;
	    while (l<=r){
	        mid=(l+r)/2;
	        if(a[mid]==10000){
	            break;
	        }
	        if(a[mid]>10000){
	            r=mid-1;
	        }
	        if(a[mid]<10000){
	            l=mid+1;
	        }
	    }
	    if(mid>0)
	    	if((10000-a[mid-1])<(a[mid]-10000))
	    		mid--;
	    printf("%d\n",a[mid]);
	    memset(a, 1024, '\0');
	    n=0;
	}
    return 0;
}