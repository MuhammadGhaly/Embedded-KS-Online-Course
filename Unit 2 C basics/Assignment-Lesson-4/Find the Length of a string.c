#include<stdio.h>

void main(){
int i =0;
char s[100];
printf("Enter a string : ");
gets(s);

while(s[i] != '\0'){
    ++i;
}
printf("length of a string is : %d",i);

}
