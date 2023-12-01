/*
 ============================================================================
 Name        : Add_Two_Distances_inches.c
 Author      : Muhammad Ghaly
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct dist {
	int feet;
	float inches;
} dist;

int main(void) {
	dist d,p,s;
	printf("Enter First Distance : \n");
	fflush(stdin);
	fflush(stdout);
	printf("Feet : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&d.feet);
	fflush(stdin);
	fflush(stdout);
	printf("inches : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f", &d.inches);
	fflush(stdin);
	fflush(stdout);
	printf("Enter Second Distance : \n");
	fflush(stdin);
	fflush(stdout);
	printf("Feet : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&p.feet);
	fflush(stdin);
	fflush(stdout);
	printf("inches : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f", &p.inches);
	fflush(stdin);
	fflush(stdout);
	s.inches=d.inches+p.inches;
	s.feet=d.feet+p.feet;
	if(s.inches>=12){
		s.inches=s.inches-12;
		s.feet+=1;
	}
	printf("Sum of Distances : %d'-%.2f\"",s.feet,s.inches);
	return EXIT_SUCCESS;
}
