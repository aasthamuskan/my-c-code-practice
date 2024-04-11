#include<stdio.h>
int main(){
    int a[10],i,max;
    for(i=0;i<10;i++){
        printf("enter the number: ");
        scanf(" %d",&a[i]);
    }
    max = a[0];
    for(i=0;i<10;i++)
    if(a[i]>max)
        max =a[i];
        printf("\n max number is %d .",max);
    
    return 0;
}