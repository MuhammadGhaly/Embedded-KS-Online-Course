#include<stdio.h>
#include<string.h>
void main(){
int i=0,len=0;
char s[100];
char temp;

printf("Enter a string : ");

gets(s);

len=strlen(s);

for(i=0;i<(len/2);i++){
    temp=s[i];
    s[i]=s[len-i-1];
    s[len-i-1]=temp;
}
s[len]='\0';
printf("Reversed String : %s",s);

}
