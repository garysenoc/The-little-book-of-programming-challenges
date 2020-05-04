#include <stdio.h>
#include <time.h> 
#include <conio.h>
#include <math.h>
void delay(int number_of_seconds) 
{ 
    int milli_seconds = 1000 * number_of_seconds; 
    
    clock_t start_time = clock(); 
    while (clock() < start_time + milli_seconds); 
} 
  
int main(){
   int i=0,second1,second2; 
   printf("Press Enter key when you are ready.");
   while(getchar()!='\n');
   
   while (!kbhit()){
     	delay(1);
     	i++;
        printf("%d seconds have passed\n", i);
   }
   second1 = i;
   i = 0;
   
   printf("Press Enter key when you are ready.");
   fflush(stdin);
   
   while(getchar()!='\n');
   while (!kbhit()){
     	delay(1);
     	i++;
        printf("%d seconds have passed\n", i);
   }
  	second2= i;
  	
  	if(second2 - second1 < 10 || second2 - second1 > 10)
  		printf("You are %d seconds far from 10 seconds",abs(10- second2 ));
  	else if(second2 - second1 ==10)
  		printf("You are excellent. %d seconds precisely",(second2 - second1) -10 );	
	
    return 0;
}
