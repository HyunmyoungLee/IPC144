#include <stdio.h>
#define SIZE 2

struct Employee{
	int id;
	int age;
	double salary;
};

int main(){

	int option,i = 0;
	struct Employee emp[SIZE] = {{0,0,0},{0,0,0}};
	

	printf("---=== EMPLOYEE DATA ===---\n\n");

	do{
		printf("1. Display Employee Information\n");
		printf("2. Add Employee\n");
		printf("0. Exit\n\n");
		printf("Please select from the above options: ");
		scanf("%d", &option);
		
		printf("\n");

		switch(option) {
			case 0 :
				printf("Exiting Employee Data Program. Good Bye!!!\n");
				break;

			case 1 :
				printf("EMP ID  EMP AGE EMP SALARY\n");
				printf("======  ======= ==========\n");
				for(i = 0 ; i < SIZE ; i++){
					printf("%6d%9d%11.2lf\n", emp[i].id, emp[i].age, emp[i].salary);
				}
				printf("\n");
				break;

			case 2 :
				printf("Adding Employee\n");
				printf("===============\n");

				if (i < SIZE){
					printf("Enter Employee ID: ");
					scanf("%d", &emp[i].id);
					printf("Enter Employee Age: ");
					scanf("%d", &emp[i].age);
					printf("Enter Employee Salary: ");
					scanf("%lf", &emp[i].salary);
					i++;
					printf("\n");
				}else{
					printf("ERROR!!! Maximum Number of Employees Reached\n\n");
				}
				break;

			default :
				break;
		}
	}while(option!=0);

	return 0;
}
	
