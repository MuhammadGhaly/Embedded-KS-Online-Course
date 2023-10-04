#include<stdio.h>

void main()
{
    int row=0,col=0,i=0,j=0;
    printf("Enter Rows and Columns of the Matrix : ");
    scanf("%d",&row);
    scanf("%d",&col);

    int arr[row][col];
    int trans[col][row];
    printf("Enter Elements of the matrix : \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("Enter arr[%d][%d] : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Entered Matrix : \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {

            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<row; ++i)
    {
        for(j=0; j<col; ++j)
        {
            trans[j][i] = arr[i][j];
        }
    }

    printf("Transposed Matrix : \n");

    for(i=0; i<col; ++i)
    {
        for(j=0; j<row; ++j)
        {
            printf("%d  ",trans[i][j]);
        }
        printf("\n");
    }

}


