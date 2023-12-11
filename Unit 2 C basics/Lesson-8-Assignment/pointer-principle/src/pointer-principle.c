/*
 ============================================================================
 Name        : pointer-principle.c
 Author      : Muhammad Ghaly
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int m= 29;
	int *ab=&m;
	printf("value of m = %d \naddress of m : %p ",m,&m);
	fflush(stdin);fflush(stdout);
	printf("\naddress of ab : %p\ncontent of ab = %d ",ab,*ab);
	m=34;
	fflush(stdin);fflush(stdout);
	printf("\naddress of ab : %p\ncontent of ab = %d ",ab,*ab);
	*ab=7;
	fflush(stdin);fflush(stdout);
	printf("\nvalue of m = %d \naddress of m : %p ",m,&m);
	return EXIT_SUCCESS;
}
