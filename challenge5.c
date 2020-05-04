#include <stdio.h>
#include <time.h>

void printDate(int month,int day,int year){
	switch(month){
		case 1: printf("January ");
		break;
		case 2: printf("February ");
		break;
		case 3: printf("March ");
		break;
		case 4: printf("April ");
		break;
		case 5: printf("May ");
		break;
		case 6: printf("June ");
		break;
		case 7: printf("July ");
		break;
		case 8: printf("August ");
		break;
		case 9: printf("September ");
		break;
		case 10: printf("October ");
		break;
		case 11: printf("November ");
		break;
		case 12: printf("December ");
		break;
	}
	printf("%d, %d",day,year);
}


int datediff(int day,int month,int year,int daynow,int monthnow,int yearnow){
	if(month<=2)
		year-=1;
	if(monthnow<=2)
		yearnow-=1;
		
	day = ((1461*year)/4) + ((153*month)/5) + day;
	daynow =  ((1461*yearnow)/4) + ((153*monthnow)/5) + daynow;
	return daynow-day;
}

int daysToseconds(int days){
	return days * 86400;
}

int main(){
	
	int day = 22,month = 8,year = 1999,daynow,yearnow,monthnow;
	time_t t = time(NULL);
  	struct tm tm = *localtime(&t);
  	daynow =  tm.tm_mday;
  	monthnow = tm.tm_mon + 1;
  	yearnow = tm.tm_year + 1900;
  	
	printf("Enter date of birth (mm/dd/yyyy): ");
	scanf("%d/%d/%d",&month,&day,&year);
	printf("\nDate of Birth: ");
	printDate(month,day,year);
	printf("\nDate Today: ");
	printDate(monthnow,daynow,yearnow);
	
	printf("\nDays difference: %d days",datediff(day,month,year,daynow,monthnow,yearnow));
	printf("\nDays in seconds: %d",daysToseconds(datediff(day,month,year,daynow,monthnow,yearnow)));
	return 0;
}
