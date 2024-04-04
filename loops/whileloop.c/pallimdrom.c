#include<stdio.h>
int main(){
    int i,n,rev=0;
    scanf("%d",&i);
    i=n;//ye step hua hi kiu bina iske b to ho zata aaram se;
    while(i>0){
        rev=rev*10+i%10;
        i=i/10;}
        if(rev==n){
            printf("its a pallindrom number .");
        }
        else{
            printf("its not a palindrom number.");
        }
    return 0;
}