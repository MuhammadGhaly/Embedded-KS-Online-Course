#include<stdio.h>
void main(){
int i=0,j=0;

float a[2][2],b[2][2],sum=0;
printf("Enter the Elements of 1st array : \n");

for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        printf("Element a[%d][%d] : ",i,j);
        fflush(stdout);
        fflush(stdin);
        scanf("%f",&a[i][j]);
    }
}

printf("\n\nEnter the Elements of 2nd array : \n");

for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        printf("Element b[%d][%d] : ",i,j);
        fflush(stdout);
        fflush(stdin);
        scanf("%f",&b[i][j]);
    }
}

printf("\nSum of Matrix : \n");

for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        sum=b[i][j]+a[i][j];
        printf("%.2f   ",sum);

    }
    printf("\n");
}


}
