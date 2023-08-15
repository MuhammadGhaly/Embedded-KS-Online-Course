#include <stdio.h>
#include <ctype.h>


void main()
{

//    unsigned char i=0,flag=0;
//
//    char vowel[]= {'a','e','i','o','y','u','U','O','I','A','Y','E'};
//
//    char x;
//    while(1)
//    {
//        printf("Enter a letter : ");
//        fflush(stdin);
//        fflush(stdout);
//        scanf("%c",&x);
//        if(!isalpha(x)){printf("Error not a letter\n");break;}
//
//        for(i=0;i<12;i++)
//        {
//            if(x==vowel[i])
//            {
//                flag=1;
//                break;
//
//            }
//            else
//            {
//                flag=0;
//
//            }
//        }
//
//        if(flag==1)
//        {
//            printf("%c is a vowel\n",x);
//        }
//        else
//        {
//            printf("%c is a consonant\n",x);
//        }
//
//    }


    char c;
    int lowercase_vowel, uppercase_vowel;
    while(1)
    {

        printf("Enter an alphabet: ");
        fflush(stdin);
        fflush(stdout);
        scanf("%c", &c);


        lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

        uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

        if (!isalpha(c))
            printf("Error! Non-alphabetic character.\n");
        else if (lowercase_vowel || uppercase_vowel)
            printf("%c is a vowel.\n", c);
        else
            printf("%c is a consonant.\n", c);


    }
}


