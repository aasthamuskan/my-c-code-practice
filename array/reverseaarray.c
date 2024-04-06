#include<stdio.h>
int main(){
    int a[10],i;
    for(i=0;i<10;i++){
        printf("enter the number: ");
        scanf("%d",&i);
    }
    for (i=9;10<i;i--){
        printf("%d",a[i]);
    }
    return 0;
}