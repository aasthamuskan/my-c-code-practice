#include<stdio.h>
int main(){
    int a,i,sum;
    scanf(" enter no to find factorial %d",&a);
    i = 1;
    sum = 0;
    while(a>= 1){
        i=i*a;
        i--;
    }
    printf(" factorial is equal to  %d",i);
}