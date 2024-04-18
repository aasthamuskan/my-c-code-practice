#include<stdio.h>
int main(){
    int *ptr=NULL;
    int a=10;
    printf("%u",ptr);
     ptr= &a;
     printf("\n%d %u\n",*ptr,ptr);
    return 0;
}