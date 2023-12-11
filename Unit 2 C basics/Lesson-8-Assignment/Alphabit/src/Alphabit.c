/*
 ============================================================================
 Name        : Alphabit.c
 Author      : Muhammad Ghaly
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char*p=0;
	char x;
	 p=&x;
	*p = 'A';
	do{
		printf("%c ",*p);
		(*p)+=1;

	}while(*p <= 'Z');



	return EXIT_SUCCESS;
}
