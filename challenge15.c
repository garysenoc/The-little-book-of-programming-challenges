#include <stdio.h>
#include <string.h>
#define OUT    0 
#define IN    1 
int countWords(char *word){
	int turn = 0, count = 0;
	
    while (*word) { 
        if(*word == ' ' || *word == '\n' || *word == '\t') 
            turn = 0; 
        else if (turn == 0){ 
            turn = 1; 
            ++count; 
        } 
        ++word; 
    } 
return count; 
}

int main(){
	
	char words[100];
	int num=0,mark,i;
	gets(words);
	
	int count = countWords(words);
	
	printf("The number of words in sentence is %d.\n",count);
	
	while(words[num] !='\0')
		num++;
	
	for(i=num-1;i>=0;i--)
		printf("%c",words[i]);
	return 0;
}
