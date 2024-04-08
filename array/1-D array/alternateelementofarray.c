#include<stdio.h>
int main(){
    int a[10],i;
    for(i=0; i<=9; i++){
        printf("Enter element : ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i+=2){
        printf("\n%d",a[i]);//agr yaha a[i] me 2 se multiply karenge to kya ye double ho zaiga?
        }
        return 0;
    }