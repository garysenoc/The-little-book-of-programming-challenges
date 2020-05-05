#include <stdio.h>



void isprime(int n){
	int i,count=0;
	
	for(i=1;i<=n;i++)
		if(!(n%i))
			count++;
	if(count<3)
		printf("It is prime");
	else
		printf("It is not prime");
}


int main(){
	
	int num,i;
	
	printf("Enter number: ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
		if(!(num%i))
			printf("%d\n",i);
	isprime(num);
	
	return 0;
}
