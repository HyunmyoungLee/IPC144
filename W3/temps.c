#include <stdio.h>
#define NUMS 4

int main(){
	int high[NUMS],low[NUMS],i,sum = 0;
	double avg;
	int highest = 0, lowest = 0;
	int Hday = 0,Lday = 0;

	printf("___=== IPC Temperature Analyzer ===___\n");
	

	for(i = 0; i < NUMS ; i++){
		printf("Enter the high value for day %d: ", i+1);
		scanf("%d", &high[i]);
		printf("\n");
		
		printf("Enter the low value for day %d: ", i+1);
		scanf("%d", &low[i]);
		printf("\n");

		while((high[i] < -40 || high[i] > 40) || (low[i] < -40 || low[i] > 40) || high[i] < low[i] ){
			printf("Incorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n\n");
			printf("Enter the high value for day %d: ", i+1);
			scanf("%d", &high[i]);
			printf("\n");

			printf("Enter the low value for day %d: ", i+1);
			scanf("%d", &low[i]);
			printf("\n");
		}
		sum = high[i] + low[i] + sum;
		
	}


	avg = (double)sum/(NUMS*2);

	printf("The average (mean) temperature was: %.2lf\n", avg);
	
	for(i = 0; i < NUMS; i++){
		if(high[i] > highest){					                        	highest = high[i];
			Hday = i+1; 
		}
		if(low[i] < lowest){						                        lowest = low[i];
			Lday = i+1;
		 }
	}
	printf("The highest temperature was %d, on day %d\n", highest, Hday);
	printf("The lowest temperature was %d, on day %d\n", lowest, Lday);
	
	return 0;
}



