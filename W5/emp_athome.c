#include <stdio.h>
#define SIZE 4

struct Employee{
	int id;
	int age;
	double salary;
};

int main(){

	int option,i = 0, count = 0,  emp_id;
	double emp_salary;
	struct Employee emp[SIZE] = {{0,0,0},{0,0,0},{0,0,0},{0,0,0}};
	

	printf("---=== EMPLOYEE DATA ===---\n\n");

	do{
		printf("1. Display Employee Information\n");
		printf("2. Add Employee\n");
		printf("3. Update Employee Salary\n");
		printf("4. Remove Employee\n");
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
					if(emp[i].id > 0)
						printf("%6d%9d%11.2lf\n", emp[i].id, emp[i].age, emp[i].salary);
				}
				printf("\n");
				break;

			case 2 :
				printf("Adding Employee\n");
				printf("===============\n");

				if (count < SIZE){
					printf("Enter Employee ID: ");
					scanf("%d", &emp[count].id);
					printf("Enter Employee Age: ");
					scanf("%d", &emp[count].age);
					printf("Enter Employee Salary: ");
					scanf("%lf", &emp[count].salary);
					count++;
					printf("\n");
				}else{
					printf("ERROR!!! Maximum Number of Employees Reached\n\n");
				}
				break;
			case 3 :
				printf("Update Employee Information\n");
				printf("===========================\n");

				do{
					printf("Enter Employee ID: ");
					scanf("%d", &emp_id);
					for(i = 0 ; i < SIZE ; i++){
						if(emp[i].id == emp_id){
							printf("The current salary is %.2lf\n", emp[i].salary);
						       printf("Enter Employee New Salary: ");
					       scanf("%lf", &emp_salary);
					       emp[i].salary = emp_salary;
						}
					}
				}while(emp_id == emp[i].salary);
				printf("\n");
				break;

			case 4 :
				printf("Remove Employee\n");
				printf("===============\n");

				do{
					printf("Enter Employee ID: ");
					scanf("%d", &emp_id);

					for(i = 0 ; i < SIZE ; i++){
						if(emp[i].id == emp_id){
							for(  ; i < SIZE; i++){
								emp[i].id = emp[i+1].id;
								emp[i].age = emp[i+1].age;
								emp[i].salary = emp[i+1].salary;
							}
							emp[SIZE-1].id = 0;
							emp[SIZE-1].age = 0;
							emp[SIZE-1].salary = 0;
							printf("Employee %d will be removed\n", emp_id);
							count--;
						}
					}
				}while(emp_id == emp[i].salary);
				printf("\n");
				break;

			default :
				printf("ERROR: Incorrect Option: Try Again\n\n");
				break;
		}
	}while(option!=0);

	return 0;
}
	
