#include <stdio.h>


long long fib(int n){
	
	long long prev = 0,next = 1,cur =1,i;
	long long arr[50];
	
	for(i=0;i<50;i++){
		arr[i] = prev;
		prev = cur;
		cur = next;
		next =prev + cur;
	}
	
	return arr[n];
}


int main(){
	
	int num,i;
	printf("Which position in sequence? ");
	scanf("%d",&num);
	
	
	printf("Fibonacci number is %lld\n",fib(num));
	
	

	return 0;
}
