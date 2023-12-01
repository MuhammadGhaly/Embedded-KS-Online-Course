/*
 ============================================================================
 Name        : Store_Information_of_Students.c
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
	float marks;
};

typedef struct student student;

int main(void) {

	student s[10];int i=0;
	printf("Enter Student Data :\n\n");
	for(;i<10;i++){
		printf("For Roll Number %d\n",i+1);
		fflush(stdin);fflush(stdout);
		printf("Enter Name : ");
		fflush(stdin);fflush(stdout);
		gets(s[i].name);
		fflush(stdin);fflush(stdout);
		printf("Enter marks :");
		fflush(stdin);fflush(stdout);
		scanf("%f",&s[i].marks);
		fflush(stdin);fflush(stdout);
	}

	printf("\nDisplaying Information : \n");

	for(i=0;i<10;i++){
			printf("For Roll Number %d\n",i+1);
			fflush(stdin);fflush(stdout);
			printf("Name : %s\n",s[i].name);
			fflush(stdin);fflush(stdout);
			printf("marks : %.2f\n",s[i].marks);
			fflush(stdin);fflush(stdout);
		}



	return EXIT_SUCCESS;
}
