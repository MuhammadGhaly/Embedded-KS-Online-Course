/*
 ============================================================================
 Name        : Reverse_Sentence_Recursion.c
 Author      : Muhammad Ghaly
 Version     :
 Copyright   : Your copyright notice
 Description : Reverse Sentence using Recursion in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void reverse();

int main(void) {


	printf("Enter the Sentence : ");
	fflush(stdin);
	fflush(stdout);
	reverse();

	return EXIT_SUCCESS;
}
void reverse() {

	char c;
	scanf("%c",&c);
	if(c != '\n'){
		reverse();
		printf("%c",c);
	}

}
