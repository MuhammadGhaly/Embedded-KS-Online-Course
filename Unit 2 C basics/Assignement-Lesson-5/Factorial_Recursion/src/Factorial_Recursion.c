/*
 ============================================================================
 Name        : Factorial_Recursion.c
 Author      : Muhammad Ghaly
 Version     :
 Copyright   : Your copyright notice
 Description : Factorial with Recursion in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int factorial(int n);

int main(void) {
	int x,fact;
	printf("Enter a number : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	fact=factorial(x);
	printf("Factorial of %d is %d",x,fact);

	return EXIT_SUCCESS;
}

int factorial(int n){
	if(n==1){
		return n;
	}
	else{
		n=n*factorial(n-1);
	}


}
