#include <stdio.h>

void Drawstars(int num,int num2){
	int i;
	
	for(i = 0;i<num;++i)
		printf(" ");
	for(i = 0;i<num2;++i)
		printf("*");
}


void drawPyramid(){
	int num,i=1,j,space,s;
	printf("Enter base size of pyramid: ");
	scanf("%d",&num);
	space = num/2;
	while(i<=num){
		for(s=1;s<=space;s++)
			printf(" ");
		for(j=1;j<=i;j++)
			printf("*");
		printf("\n");
		space--;
		i+=2;
	}
}
int main(){
	Drawstars(2,3);
	printf("\n");
	Drawstars(2,3);
	printf("\n");
	Drawstars(3,1);
	printf("\n");
	Drawstars(2,3);
	printf("\n");
	Drawstars(0,7);
	printf("\n");
	Drawstars(2,3);
	printf("\n");
	Drawstars(2,1);
	Drawstars(1,1);
	printf("\n");
	Drawstars(1,2);
	Drawstars(1,2);
	
	drawPyramid();
	return 0;
}
