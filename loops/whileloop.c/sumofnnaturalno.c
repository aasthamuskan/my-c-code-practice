#include<stdio.h>
int main(){
    int a,i,sum;
    printf("enter the number: ");
    scanf("%d",&a);
    i=1;
    sum = 0;
    while(i<=a){
        sum =sum + i;
        i=i +1;
    }
    printf("\nThe sum of %d natural is %d",sum);
}