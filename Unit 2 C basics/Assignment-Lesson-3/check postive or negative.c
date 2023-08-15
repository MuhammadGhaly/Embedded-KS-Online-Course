#include<stdio.h>

void main()
{
    float x ;
    while(1)
    {
        printf("Enter a number : ");

        scanf("%f",&x);
        if(x==0)
        {
            printf("You entered a zero\n");
        }
        else if(x > 0)
        {
            printf("%f is a positive\n",x);
        }
        else
        {
            printf("%f is a Nagative\n",x);
        }

    }
}
