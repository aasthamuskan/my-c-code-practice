#include<stdio.h>
int main(){
    int a[10],i,even,odd;
    for(i=0;i<10;i++){
        printf("enter the number: ");
        scanf("%d",&a[i]);

    }
    for(i=0;i<10;i++){
        if(a[i]%2==0){
            even++;
        }else{
            odd=odd*a[i];
        }
    }
    printf("\nsum of even number%d,product of odd number %d",even,odd);
}