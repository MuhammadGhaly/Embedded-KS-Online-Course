/*
 ============================================================================
 Name        : pointer-to-struct.c
 Author      : Muhammad Ghaly
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
typedef struct exp{
	char *emp;
	int id;
}exp;
int main(void) {
	exp x,y;
	x.emp="Muhammad";
	x.id = 1810;
	y.emp="Ahmed";
	y.id = 1508;
	exp *arr[2];
	arr[0]=&x;
	arr[1]=&y;
	exp *(*p)=arr;
	int i=0;
	for(;i<2;i++){
		printf("Partner %d : %s \n",i+1,(*(*(p+i))).emp);

		printf("ID : %d\n",(*(*(p + i))).id);

	}



	return EXIT_SUCCESS;
}

//#include <stdio.h>
//
//// Defining a structure for employee details
//struct employee {
//    char *empname;  // Employee name (string pointer)
//    int empid;      // Employee ID (integer)
//};
//
//// Main function
//int main() {
//    // Displaying the purpose of the program
//    printf("\n\n Pointer : Show a pointer to an array which contents are pointer to structure :\n");
//    printf("-----------------------------------------------------------------------------------\n");
//
//    // Initializing employee structures with values
//    static struct employee emp1 = {"John", 1001}, emp2 = {"Alex", 1002}, emp3 = {"Taylor", 1003};
//
//    // Creating an array of pointers to struct employee
//    struct employee (*arr[]) = {&emp1, &emp2, &emp3};
//
//    // Creating a pointer to an array of pointers to struct employee
//    struct employee (*(*pt)[3]) = &arr; // pt stores the address of the array of pointers
//
//    // Printing employee name using pointer to an array of pointers to structure
//    printf(" Employee Name : %s \n", (**(*pt + 1)).empname);
//
//
//
//    // Printing employee ID using pointer to an array of pointers to structure
//    printf(" Employee ID :  %d\n", (*(*pt + 1))->empid);
//
//
//
//    return 0;
//}

