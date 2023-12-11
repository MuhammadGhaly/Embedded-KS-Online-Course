/*
 ============================================================================
 Name        : reversed-Array.c
 Author      : Muhammad Ghaly
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int arr[5];int i = 0;
	int *p = arr;
	printf("Enter an array : \n");
	fflush(stdin);
	fflush(stdout);
	for(;i<5;i++){
		printf("Element-%d : ",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%d",p+i);
	}
	for(i=0;i<5;i++){
		printf("\nElement-%d : ",i+1);
		//fflush(stdin);fflush(stdout);
		printf("%d",*(p+i));
	}
	printf("\n\n Reversed Array \n ------------------\n");
	for (i = i - 1; i >= 0; i--) {
		printf("Element-%d : ",i+1);
		printf("%d\n", *(p + i));
		//fflush(stdin);fflush(stdout);
	}

	return EXIT_SUCCESS;
}
