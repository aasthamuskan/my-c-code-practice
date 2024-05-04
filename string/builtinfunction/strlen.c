#include<stdio.h>
#include<string.h>
int main(){
    char str[70];
    printf("\nenter string");
    gets(str);
    printf("length of string is: %d",strlen(str));
    return 0;
}