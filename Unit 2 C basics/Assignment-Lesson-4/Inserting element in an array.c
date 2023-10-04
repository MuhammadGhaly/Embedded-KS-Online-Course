#include<stdio.h>

void main()
{

    int i=0,n=0,x=0,index=0,temp=0;
    printf("Enter No of Elements : ");
    scanf("%d",&n);
    int a[10];
    printf("Enter Elements of the array : \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter a number to insert & the location : ");
    scanf("%d  %d",&x,&index);
    a[n]=x;
    for(i=n; i>=index; i--)
    {
        temp=a[i];
        a[i]=a[i-1];
        a[i-1]=temp;
    }
    for(i=0; i<=n; i++)
    {
        printf("%d",a[i]);
    }

}
