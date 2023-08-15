#include <stdio.h>

void main()
{
    float x,y,ans;
    char oper ;
    while(1)
    {
        printf("Enter two operands : ");
        fflush(stdin);
        fflush(stdout);
        scanf("%f %f",&x,&y);
        printf("Enter an operator either + or - or * or / : ");
        fflush(stdin);
        fflush(stdout);
        scanf("%c",&oper);

        switch (oper)
        {
        case'+':
            ans = x+y;
            break;
        case'-':
            ans = x-y;
            break;
        case'*':
            ans = x*y;
            break;
        case'/':
            ans = x/y;
            break;
        default :
            break;

        }
        printf("Answer = %f\n\n",ans);
    }
}
