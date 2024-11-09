#include <stdio.h>
#include <string.h>
/*define structure*/
structure named employee{
char name[25];
int id;
char department[20];
float salary;
char email[50];
}

int main(){
/*declare and initialize a variable*/
struct employee emp;
strcpy(emp.name, "John Deo');
emp.id = 12345;
strcpy(emp.department, "Human Resource");
emp.salary = 55000.50;
strcpy(emp.email, "john.deo@company.com");

/*outputs*/
printf("Employee details: \n");
printf("Name: %s \n", emp.name );
printf("ID: %d\n", emp.id);
printf("Department: %s \n", emp.department);
printf("salary: %.2f\n", emp.salary);
printf("Email: %s\n", emp.email);

return 0;

}