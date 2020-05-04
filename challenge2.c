#include <stdio.h>

int main(){
	char name[100];
	
	printf("What is you name?\n");
	gets(name);
	printf("Hello %s",name);
	
	return 0;
}
