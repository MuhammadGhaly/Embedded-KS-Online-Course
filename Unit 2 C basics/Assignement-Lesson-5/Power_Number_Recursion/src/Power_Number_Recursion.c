/*
 ============================================================================
 Name        : Power_Number_Recursion.c
 Author      : Muhammad Ghaly
 Version     :
 Copyright   : Your copyright notice
 Description : Power of a number using Recursion in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int power(int n,int p);
int count;
int main(void) {

	int n,result,p;
	printf("Enter the base Number : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	printf("Enter the power : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&p);
	result = power(n,p);
	printf("%d",result);

	return EXIT_SUCCESS;
}

int power(int n, int p){

	if(p!=0){
		return (n*power(n,p-1));
	}
	else{
		return 1;
	}

}




