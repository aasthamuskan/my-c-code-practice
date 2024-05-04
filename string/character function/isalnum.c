#include<stdio.h>
#include<ctype.h>

int main(){
    char ch;
    printf("\nenter an alphabet: ");
    if(isalnum(ch))
    printf("\nthe character is an alphabet.");

    else
    printf("\nthe character is not an alphabet");

    return 0;
}