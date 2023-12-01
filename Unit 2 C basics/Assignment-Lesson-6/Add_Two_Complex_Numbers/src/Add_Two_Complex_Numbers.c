/*
 ============================================================================
 Name        : Add_Two_Complex_Numbers.c
 Author      : Muhammad Ghaly
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct complex{
	float real;
	float imaginary;
}complex;

int main(void) {
	complex n,m;
	printf("Enter First Number : \n");
	fflush(stdin);fflush(stdout);
	printf("Real : ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&n.real);
	fflush(stdin);fflush(stdout);
	printf("Imaginary : ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&n.imaginary);
	fflush(stdin);fflush(stdout);
	printf("Enter Second Number : \n");
	fflush(stdin);fflush(stdout);
	printf("Real : ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&m.real);
	fflush(stdin);fflush(stdout);
	printf("Imaginary : ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&m.imaginary);
	fflush(stdin);fflush(stdout);
	printf ("Sum = %.2f+%.2fi",n.real+m.real,n.imaginary+m.imaginary);
	return EXIT_SUCCESS;
}
