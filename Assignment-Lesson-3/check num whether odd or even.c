#include <stdio.h>
#include <stdlib.h>

void main() {

	int num;

	while(1){

		printf("Enter an integer : ");

		fflush(stdin);fflush(stdout);

		scanf("%d",&num);

		if(num % 2 ==0){
			printf("num %d is an even number\n",num);
		}
		else{printf("num %d is an odd number\n",num);}

	}

}

