#include<stdio.h>
#include<stdlib.h>

int main(void){
	float x1,x2,x3,x4,y1,y2,y3,y4,a;
	printf("Enter four points (x1 y1 x2 y2 x3 y3 x4 y4):");
	while (scanf("%f %f %f %f %f %f %f %f",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4)!=EOF){
		if(x1==0&&x2==0&&x3==0&&x4==0&&y1==0&&y2==0&&y3==0&&y4==0)
			break;
		else if(x1<-1000000||x1>1000000||x2<-1000000||x2>1000000||x3<-1000000||x3>1000000||x4<-1000000||x4>1000000||y1<-1000000||y1>1000000||y2<-1000000||y2>1000000||y3<-1000000||y3>1000000||y4<-1000000||y4>1000000)
			printf("Invalid input.\n");
		else{
			if(x1==x2&&x3==x4)
				a= ( ((y1>y2)?y1-y2:y2-y1) + ((y3>y4)?y3-y4:y4-y3) )* ((x1>x3)?x1-x3:x3-x1)/2;
			else if(x1==x3&&x2==x4)
				a= ( ((y1>y3)?y1-y3:y3-y1) + ((y2>y4)?y2-y4:y4-y2) )* ((x1>x2)?x1-x2:x2-x1)/2;
			else if(x1==x4&&x2==x3)
				a= ( ((y1>y4)?y1-y4:y4-y1) + ((y3>y2)?y3-y2:y2-y3) )* ((x1>x3)?x1-x3:x3-x1)/2;
			else if(y1==x2&&y3==y4)
				a= ( ((x1>x2)?x1-x2:x2-x1) + ((x3>x4)?x3-x4:x4-x3) )* ((y1>y3)?y1-y3:y3-y1)/2;
			else if(y1==y3&&y2==y4)
				a= ( ((x1>x3)?x1-x3:x3-x1) + ((x2>x4)?x2-x4:x4-x2) )* ((y1>y2)?y1-y2:y2-y1)/2;
			else if(y1==y4&&y2==y3)
				a= ( ((x1>x4)?x1-x4:x4-x1) + ((x3>x2)?x3-x2:x2-x3) )* ((y1>y3)?y1-y3:y3-y1)/2;
			else{
				printf("Invalid input.\n");
				printf("Enter four points (x1 y1 x2 y2 x3 y3 x4 y4):");
				continue;
			}
			printf("The area of the trapezoid is: %.2f\n",a);
		}
		printf("Enter four points (x1 y1 x2 y2 x3 y3 x4 y4):");
	}
	printf("Finish!\n");
	return 0;
}
