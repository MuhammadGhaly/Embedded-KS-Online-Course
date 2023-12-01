/*
 ============================================================================
 Name        : find_area_of_a_circle.c
 Author      : Muhammad Ghaly
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define pi 3.14
#define Area(r) (pi*r*r)

int main(void) {
	float r;
	 printf("Enter The radius :");
	 fflush(stdin);fflush(stdout);
	 scanf("%f",&r);
	 fflush(stdin);fflush(stdout);
	 printf("Area = %.2f",Area(r));

	return EXIT_SUCCESS;
}
