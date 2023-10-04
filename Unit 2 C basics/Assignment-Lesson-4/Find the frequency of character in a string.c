#include<stdio.h>

void main()
{
    int i=0,count=0;
    char s[100];
    char x;
    printf("Enter a string : ");
    fflush(stdout);
    fflush(stdin);
    gets(s);
    printf("Enter a character to find frequency : ");
    fflush(stdout);
    fflush(stdin);
    scanf("%c",&x);

    while(s[i] != '\0')
    {
        if(s[i]==x)
        {
            ++count;
        }
        ++i;
    }

    printf("Frequency of %c = %d",x,count);


}
