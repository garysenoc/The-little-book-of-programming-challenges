#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
int randomNumber(){
	return rand() % 13 + 1;
}

char highlow(char* word){
	char c;
	printf("%s: ",word);
	fflush(stdin);
	scanf("%c",&c);
	c = toupper(c);
	return (c=='L') ? 1 : (c=='H') ? 2 : 0;
}


int nextNumber(int n){
	int num = randomNumber();
	while(num==n)
		num = randomNumber();
	return num;
}

int resulta(int start, int next, int opt){
	return (next<start&& opt == 1 || next > start && opt == 2) ? 1 : 0;
}
int main(){
	
	srand(time(NULL));
	int start = randomNumber(),lost=0,opt=0,result,life=2,turn=1;
	int next = nextNumber(start);
	printf("Starting number: %d\n\n",start);
	
	while(1){
		opt = highlow("Higher(H) or lower(L)? ");
		while(opt==0)
			opt = highlow("Higher(H) or lower(L)? ");
		printf("\nNext number %d\n\n",next);
		result =resulta(start,next,opt);
		
		if(!(result))
			life--;
		if(life==0)
			break;
		if(turn == 10)
			break;
		turn++;
		start = next;
		next = nextNumber(start);
	}	
	
	if(turn == 10)
		printf("You win");
	else
		printf("You lose");
	
	return 0;
}
