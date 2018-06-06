#include <stdio.h>
int main(){

	double amount;
	printf("Please enter the amount to be paid: $");
	scanf("%lf", &amount);

	int Loonies = amount/1;
	double balance = amount - Loonies;
	printf("Loonies required: %d, balance owing $%.2lf\n", Loonies, balance);
	
	int Quarters = balance/0.25;
	balance = balance - Quarters*0.25;
	printf("Quarters required: %d, balance owing $%.2lf\n", Quarters, balance);
	return 0;
}
