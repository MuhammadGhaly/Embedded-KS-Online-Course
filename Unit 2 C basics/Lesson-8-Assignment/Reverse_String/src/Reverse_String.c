/*
 ============================================================================
 Name        : Reverse_String.c
 Author      : Muhammad Ghaly
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char s[50];
	char *p=s;
	printf("Enter a String : ");
	fflush(stdin);fflush(stdout);
	gets(s);
	int i=0;
	while(*p || *p==' ' ){
		p++;
		i++;
	}
	p=s;
	for(i=i-1;i>=0;i--){
		printf("%c",*(p+i));
		//fflush(stdin);fflush(stdout);
	}
	printf("\n%s",s);
	return EXIT_SUCCESS;
}
