#include <stdio.h>

float distance(float speed, float time){
	return speed*(time/60);
}

float speedThis(float distance, float time){
	return distance / (time/60);
}

//distance = km
//time = minutes
int main(){
	
	float speed,time,dist;
	printf("Enter speed: ");
	scanf("%f",&speed);
	printf("Enter time: ");
	scanf("%f",&time);
	printf("Distance: %.2fkm",distance(speed,time));
	
	printf("\nEnter distance: ");
	scanf("%f",&dist);
	printf("Enter time: ");
	scanf("%f",&time);
	printf("Speed: %.2fkm",speedThis(dist,time));
	
	
	return 0;
}
