#include<stdio.h>
#include<ctype.h>
int main() {
    int  ch;
    printf("\nenter the digit");
    scanf("%d",&ch);
    if (isdigit(ch))
        printf("You entered %d is dighit" , ch);

    else{
        printf("You did not enter a valid digit\n");
        return 0;
    }  
    return 0; }  