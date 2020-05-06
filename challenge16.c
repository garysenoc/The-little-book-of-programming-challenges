#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int guess(int num,int guess1){
	return ((guess1>num) ?  1 : (guess1<num) ?  2 : 0);	
}

char* print(int n){
	return n==1 ? "Too high\n" : n==2 ? "Too low\n" : "Got it\n";
}
int main(){
	srand(time(NULL));
	int num = rand() % 100 + 1,guess1,attempt=0,got=100;
	
	while(got){
		scanf("%d",&guess1);
		got = guess(num,guess1);
		printf("%s",print(got));
		++attempt;
	}
	
	printf("\n\nAttempts: %d",attempt);
	return 0;
}
