#include<stdio.h>

void main(){
int n=0,i=0;
printf("Enter the numbers of data : ");
scanf("%d",&n);
float arr[n],avg=0,sum=0;

for(i=0;i<n;i++){
    printf("Enter num : ");
    scanf("%f",&arr[i]);
}

for(i=0;i<n;i++){
    sum=sum+arr[i];
}
avg=sum/n;
printf("Average = %.2f",avg);
}
