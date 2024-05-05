#include<stdio.h>
#include<string.h>
int main(){
    char str[1024];
    printf("\nenter the string: ");
    gets(str);
    printf("\nstring in reverse order=%s",strrev(str));
    return 0;


}