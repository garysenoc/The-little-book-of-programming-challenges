#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void card(int num,int suit){
	switch(num){
		case 1:printf("Ace");
			break;
		case 11:printf("Jack");
			break;
		case 12:printf("Queen");
			break;
		case 13:printf("King");
			break;
		default:
			printf("%d",num);
	}
	switch(suit){
		case 1:printf(" of Spades");
			break;
		case 2:printf(" of Hearts");
			break;
		case 3:printf(" of Diamonds");
			break;
		case 4:printf(" of Clubs");
			break;
	}
}
int main(){
	
	int num,suit;
	srand(time(NULL));
	
	num = rand()%13 + 1;
	suit = rand()%4 + 1;
	
	card(num,suit);
}










