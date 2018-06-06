#include <stdio.h>
int main(){
	
	double amount;
	printf("Please enter the amount to be paid: $");
	scanf("%lf", &amount);
	
	double GST = amount*0.13 + 0.005;
	printf("GST: %.2lf\n", GST);

	double balance = amount + GST;
	printf("Balance owing: $%.2lf\n", balance);

	int Loonies = balance/1;
	balance = balance - Loonies;
	int remaining = balance * 100 + 100 % 100;
	printf("Loonies required: %d, balance owing $%.2f\n", Loonies, (float)remaining/100);
	
	int Quarters = balance/0.25;
	balance = balance - Quarters * 0.25;
	remaining = (remaining - Quarters * 0.25 * 100) + 100 % 100;
	printf("Quarters required: %d, balance owing $%.2f\n", Quarters, (float)remaining/100);

	int Dimes = balance/0.1;
	balance = balance - Dimes * 0.1;
	remaining = (remaining - Dimes * 0.1 * 100) + 100 % 100;
	printf("Dimes required: %d, balance owing $%.2f\n", Dimes, (float)remaining/100);

	int Nickels = balance/0.05;
	balance = balance - Nickels * 0.05;
	remaining = (remaining - Nickels * 0.05 * 100) + 100 % 100;
	printf("Nickels required: %d, balance owing $%.2f\n", Nickels, (float)remaining/100);
	int pennies = balance/0.01;
	balance = balance - pennies * 0.01;
	remaining = (remaining - pennies * 0.01 * 100) + 100 % 100;
	printf("Nickels requried: %d, balance owing $%.2f\n", pennies, (float)remaining/100);
	return 0;
}
