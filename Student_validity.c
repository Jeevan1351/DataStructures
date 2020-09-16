#include<stdio.h>


struct Student
{
	int std_id;
	int age;
	float marks;
};


int main()
{
	struct Student user;
	printf("Enter the Student ID:    ");
	scanf("%d", &user.std_id);
	printf("\nEnter the age:    ");
	scanf("%d", &user.age);
	printf("\nEnter the marks:    ");
	scanf("%f", &user.marks);
	int m = (user.marks<0 || user.marks>100)?1:0;
	int a = (user.age>20)?0:1;
	if(a == 1 && m == 1)
		printf("Age and Marks are INVALID!!");
	else if (a==1)
		printf("Age is INVALID!!");
	else if (m==1)
		printf("Marks are INVALID!!");
	if (a || m || user.marks<=65)
		printf("\nNot Eligible for admission! : (\n\n");
	else
		printf("\nEligible for admission : )\n\n");
}

