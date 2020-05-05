#include <stdio.h>
#include <stdlib.h>
#include <time.h>


typedef enum{
	rock,paper,scissor
}weapon;

weapon enemy(){
	return rand() % 3;
}

weapon player(int n){
	return (n==1) ? rock : (n==2) ? paper : scissor; 
}

void menu(){
	printf("Rock    - [1]\n");
	printf("Paper   - [2]\n");
	printf("Scissor - [3]\n");
}

int choose(int n){
	n = 0;
	while( n > 3 || n < 1){
		menu();
		printf("Choose a number [1 - 3]: ");
		scanf("%d",&n);
	}
return n;
}

char* nameWeapon(weapon w){
	if(w==rock)
		return "ROCK";
	if(w==paper)
		return "PAPER";
	if(w==scissor)
		return "SCISSOR";
}

void won(weapon player,weapon com){
	switch(player){
		case rock:
			if(com==paper)
				printf("You lose!");
			if(com==scissor)
				printf("You won!");
			if(com == player)
				printf("It is draw!");
		break;
		case paper:
			if(com==scissor)
				printf("You lose!");
			if(com==rock)
				printf("You won!");
			if(com == player)
				printf("It is draw!");
		break;
		case scissor:
			if(com==rock)
				printf("You lose!");
			if(com==paper)
				printf("You won!");
			if(com == player)
				printf("It is draw!");
		break;
		
	}
}
int main(){
	
	srand(time(NULL));
	weapon player1,com;
	int opt =10;
	
	while(opt!=0){
	system("cls");
	fflush(stdin);
	
	player1 = player(choose(player1));
	com = enemy();
	
	printf("\n\nPlayer 1: %s   vs   Computer: %s\n",nameWeapon(player1),nameWeapon(com));
	won(player1,com);
	
		while(1){
			printf("\n\nDo you want to play again?[1 - yes |  0 - no]: ");
			scanf("%d",&opt);
			if(opt==1 || opt==0)
				break;
		}
	}
	return 0;
}
