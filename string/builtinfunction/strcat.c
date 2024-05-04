#include<stdio.h>
#include<string.h>
int main(){
    char str[70],st[70];
    printf("\nenter string");
    gets(str);
     printf("\nenter string");
    gets(st);
    strcat(str,st);
    printf("concatenated string is %s",str);
    return 0;
}