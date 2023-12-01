/*
 ============================================================================
 Name        : Store_Information.c
 Author      : Muhammad Ghaly
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

 struct student{
	char name[50];
	int rolls;
	float marks;
};

typedef struct student student;

int main(void) {

	student s;

	printf("Enter Data of student: \n");
	fflush(stdin);fflush(stdout);
	printf("Enter Name : ");
	fflush(stdin);fflush(stdout);
	fgets(s.name,sizeof(s.name),stdin);
	fflush(stdin);fflush(stdout);
	printf("Enter Rolls : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&s.rolls);
	fflush(stdin);fflush(stdout);
	printf("Enter Marks : ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&s.marks);
	fflush(stdin);fflush(stdout);

	printf("\n\nDisplaying Data : \n");
	printf("Name : %s",s.name);
	printf("Rolls : %d\n",s.rolls);
	printf("Marks : %.2f\n",s.marks);



	return EXIT_SUCCESS;
}
