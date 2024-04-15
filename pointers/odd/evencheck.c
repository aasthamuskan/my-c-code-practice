#include<stdio.h>
int main(){
    int a,*p;
    printf("\nEnter the no to check for odd/even:  ");
    scanf("%d",&a);
    p = &a;                   //address of variable 'a' is stored in pointer variable 'p'
    if(*p % 2 ==  0)            //value at address stored in 'p' is checked for evenness by using dereferencing operator *
       printf("even");
    else
    printf("odd");
    return 0;
}