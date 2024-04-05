#include<stdio.h>
int main(){
    int a[10],i,sum;
    sum=0;
    for(int i =0;i<10;i++){
        printf("Enter the element of array: ");
        scanf("%d",&a[i]);
    }
    for(int i=0;i<10;i++){
        sum=sum+a[i];
    }
    printf("sum of the given array is: ");
    return 0;
}