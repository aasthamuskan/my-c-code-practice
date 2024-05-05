#include<stdio.h>
#include<string.h>
int main(){
    char a[50];
    printf("\nEnter string in lower case: ");
    gets(a);
    printf("\nString in upper case=%s",strupr(a));
    return 0;
}