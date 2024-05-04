#include<stdio.h>
int main(){
    char a[50],b[50],c[100];
    printf("enter the string :");
    get(a);
    printf("enter the charater:" );
    get(b);
    int i=0,j=0;
    while(a[i]!='\0'){
        c[i]=a[i];
        i++;

    }
    while(b[j]!='\0')
    {
        c[i]=b[j];
        i++;
        j++;
    }
    c[j]='\0';
    printf("\nenter the cocatenated string=%s",c);
    return 0;
}