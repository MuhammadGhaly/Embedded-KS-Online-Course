#include <stdio.h>
void main()
{
    unsigned char c;
    while(1)
    {
        printf("Enter a character: ");
        fflush(stdin);
        fflush(stdout);
        scanf("%c", &c);

        if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
        {
            printf("%c is an alphabet.\n", c);
        }
        else
        {
            printf("%c is not an alphabet.\n", c);
        }


    }
}

