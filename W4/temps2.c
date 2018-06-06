#include <stdio.h>

struct Temperature{
	int High;
	int Low;
};

int main(){
	
	int num, i;
	printf("---=== IPC Temperature Calculator V2.0 ===---\n");
	printf("Please enter the number of days, between 3 and 10, inclusive: ");
	scanf("%d", &num);
	printf("\n");
	
	while(num < 3 || num > 10){
		printf("Invalid entry, please enter a number between 3 and 10, inclusive: ");
		scanf("%d", &num);
	}
	printf("\n");

	struct Temperature Temp[num];

	for(i = 0 ; i < num ; i++){
		printf("Day %d - High: ", i+1);
		scanf("%d", &Temp[i].High);
		printf("Day %d - Low: ", i+1);
		scanf("%d", &Temp[i].Low);
	}
	printf("\n");
	printf("Day  Hi  Low\n");
	for(i = 0; i < num ; i++){
		printf("%d %4d %5d\n", i+1, Temp[i].High, Temp[i].Low);
	}	

	printf("\n");
	
	int Highest = 0 , Lowest = 0, DayOfHigh, DayOfLow;

	for(i = 0 ; i < num ; i++){
		if(Temp[i].High > Highest){
			Highest = Temp[i].High;
			DayOfHigh = i+1;
		}
		if(Lowest > Temp[i].Low){
			Lowest = Temp[i].Low;
			DayOfLow = i+1;
		}
	}
	printf("The highest temperature was %d, on day %d\n", Highest, DayOfHigh);
	printf("The lowest temperature was %d, on day %d\n", Lowest, DayOfLow);

	printf("\n");
	
	int num2, avg_day1, avg_day2;
	double avg;
	
	do{
		printf("Enter a number between 1 and 4 to see the average temperature for the entered number of days, enter a negative number to exit: ");
		scanf("%d", &num2);
		printf("\n");

		while( (num2 >= 0 && num2 < 1) || num2 > 4){
			printf("Invalid entry, please enter a number between 1 and 4, inclusive: ");
			scanf("%d", &num2);
			printf("\n");
		}
		if(num2 < 0){
			printf("Goodbye!\n");
			break;
		}
		for(i = 0 ; i < num2 ; i++){
			avg_day1 += Temp[i].High;
			avg_day2 += Temp[i].Low;
		}
		avg = (double)( avg_day1 + avg_day2 ) /(num2*2);
		printf("The average temperature up to day %d is: %.2lf\n\n", num2, avg);
		avg_day1 = 0;
		avg_day2 = 0;

	}while(num2 >= 1 && num2 <= 4);
		
	return 0;
}	

