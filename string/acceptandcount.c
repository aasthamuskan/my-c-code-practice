#include<stdio.h>
int main(){
    char a[100];
    int i,word=1;
    printf("Enter the string: ");
    gets(a);
    i=0;
    while(a[i]!='\0'){
        if(a[i]==" ")
        word++;
        i++;

    }
    printf("\nnumber of words=%d",word);
    getch();
}