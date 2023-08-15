#include <stdio.h>
void main()
{
    int x,i,sum;

    while(1)
    {

        printf("Enter a number : ");
        fflush(stdin);
        fflush(stdout);
        scanf("%d", &x);
        i=0;
        sum=0;
        while(i<=x)
        {
            sum+=i;
            i++;
        }
        printf("%d is the sum of numbers\n",sum);


    }

}
