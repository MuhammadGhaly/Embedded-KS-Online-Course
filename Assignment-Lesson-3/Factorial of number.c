#include <stdio.h>

void main()
{
    int x, i, fact;

    while(1)
    {
        printf("Enter an integer number : ");

        fflush(stdin);
        fflush(stdout);
        scanf("%d",&x);
        if(x<=0)
        {
            printf("Error!!!\n");
        }
        else
        {
            i=1;
            fact=1;
            while(i<=x)
            {
                fact=fact*i;
                i++;
            }
            printf("Factorial of %d is %d\n",x,fact);
        }

    }
}
