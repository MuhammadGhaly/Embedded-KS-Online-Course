#include<stdio.h>

void main()
{

    int n=0,x=0,i=0;
    printf("Enter No of Elements\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter Elements values : \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter a number U want to find\n");
    scanf("%d",&x);

    for(i=0; i<n; i++)
    {
        if(x==a[i])
        {
            printf("number found in location %d",i+1);
            break ;
        }

    }
    if(i==n)
    {
        printf("number not found");
    }


}
