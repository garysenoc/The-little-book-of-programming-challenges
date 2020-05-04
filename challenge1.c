#include <stdio.h>
#include<stdlib.h>

int main(){
	printf("I ask a Frenchman if he played any video games...");
	system("color 1");
	while(getchar() != '\n');
	system("cls");
	system("color 2"); 
	printf("\nHe said \'Wii\'");
	return 0;
}
