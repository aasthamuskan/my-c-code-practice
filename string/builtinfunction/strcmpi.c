#include<stdio.h>
#include<string.h>
int main(){
    char a[50],b[50];
    printf("\nenter first string: ");
    gets(a);
    printf("\nenter second string: ");
    gets(b);    
    if(strcmpi(a,b)==0)
    printf("\nEqual strings.");
    else if(strcmpi(a,b)>0)
    printf("\nfirst string is greater");
    else 
    printf("second string is greater");
    return 0;
}//case sensitive comparision nahi karta hai