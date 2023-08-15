#include<stdio.h>
#include<ctype.h>
void main()
{
    while(1)
    {
        float x, y,z,max=0;

        printf("Enter three nums : ");
        scanf("%f",&x);
        scanf("%f",&y);
        scanf("%f",&z);
        if(isalpha(x)||isalpha(y)||isalpha(z))
        {
            printf("Error\n");
        }

        if(x > y && x>z)
        {
            max = x;

        }
        else if(y > x && y>z)
        {
            max = y;

        }
        else
        {
            max = z;

        }
        printf("Max is %f\n",max);
    }
}

