#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int computer(int n){
	if(n==4)
		return 3;
	if(n==3)
		return 2;
	if(n==2)
		return 1;

	if(n ==1)
		return 1;
	return rand() % 3 +1;
}
int main(){
	
	srand(time(NULL));
	int starting = (rand() % 11)+ 20,num,com,turn =0;
	
	printf("Starting number: %d\n",starting);
	
	while(starting){
		printf("How many do you want to remove: ");
		scanf("%d",&num);
		turn = 0;
		starting-=num;
		printf("%d left\n",starting);
			if(!(starting))
				break;
		com = computer(starting);
		printf("Computer removes %d\n", com);
		starting-=com;
		printf("%d left\n",starting);
		turn = 1;
		if(!(starting))
			break;
	}
	
	if(turn)
		printf("You won");
	else
		printf("You lose");
	
	return 0;
}
