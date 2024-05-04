#include<stdio.h>
int main(){
    char a[50];
    int i;
    printf("\nenter your no: ");
    gets(a);
    i=0;
    while (a[i]!='\0');
    i++;
    printf("\nTotal number of charaters=%d",i);
    return 0;
}