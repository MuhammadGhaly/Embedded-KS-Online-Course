/*
 ============================================================================
 Name        : Lesson5_Function_Assignment.c
 Author      : Muhammad Ghaly
 Version     :
 Copyright   : Your copyright notice
 Description : prime Numbers, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int prime_Numbers(int n);

int main(void) {
	int x, y, flag, i = 0;
	printf("Enter two interval Numbers : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d%d", &y, &x);

	if (y > x) {
		y = y - x;
		x = x + y;
		y = x - y;
	}
	printf("Prime Numbers between %d and %d are : ",y,x);
	for (i = y; i < x; i++) {
		flag = prime_Numbers(i);
		if (flag == 0) {
			printf("%d ", i);
		}
	}

	printf("\nEnd");

	return EXIT_SUCCESS;
}

int prime_Numbers(int n) {
	int j, flag=0;
	for (j = 2; j < n; j++) {
		if (n % j == 0) {
			flag = 1;
			break;
		}
	}
	return flag;
}

