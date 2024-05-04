#include<stdio.h>
#include<ctype.h>

int main(){
    char ch;
    printf("\nenter an alphabet: ");
    if(islower(ch))
    printf("\nthe character is.");

    else
    printf("\nthe character is not ");

    printf("\nthe character is in lower: %c",toupper(ch));
    return 0;
}