#include <stdio.h>
int main() 
{

	int age;
	float gpa;
	char grade;


	printf("Enter your age:  ");
	scanf("%i", &age);


	printf("Enter your gpa:  ");
	scanf("%f", &gpa);
	
	printf("Enter your letter grade:  ");
	scanf(" %c", &grade);

	printf("your age is %i, your gpa is %f, your letter grade is  %c \n", age, gpa, grade);

	return 0;


} 
