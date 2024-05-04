#include<stdio.h>
int main(){
     char a[50],b[50];
     int i;
     i=0;
     printf("Enter the first string: ");
     gets(a);
     while(a[i]!='\0'){
        b[i]=a[i];
        i++;
     }
     b[i]='\0';
     printf("\ncopied string =%s",b);
     return 0;
}