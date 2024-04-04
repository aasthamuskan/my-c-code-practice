#include<stdio.h>
int main(){
    int i,n;
    scanf("%d",&i);
    n=0;
    while(i>0){
        n=n*10+i%10;
        i=i/10;
        if(i==n){
            printf("its a pallindrom number .");
        }
        else{
            printf("its not a palindrom number.");
        }
    }
}