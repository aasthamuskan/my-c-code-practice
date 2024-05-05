#include<stdio.h>
#include<string.h>
int main(){
    char a[50];
    printf("\nEnter string in upper case: ");
    gets(a);
    printf("\nString in lower case=%s",strlwr(a));
    return 0;
}