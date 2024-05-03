#include<stdio.h>
int main(){
    int i;
    printf("\nenter no to find reverse: ");
    scanf("%d",&i);
    int n=0;
    while(i>0){
        n=n*10+i%10;//n*10 isslia kia kyuki yaha decimal places ki value badhani hai kyuki no ko reverse me print karani hai nah isslia 
        i=i/10;
    }
    printf("\nReverse is equal to: %d",n);
    return 0;

}