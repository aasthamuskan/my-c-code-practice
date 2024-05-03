#include<stdio.h>
int main(){
    int n,i,sum;
    printf("\n Enter No: ");
    scanf("%d",&i);
    i=1;
    sum = 0;
    while(i>0){
        sum= sum + i%10;
        i=i/10;
}
printf("\nsum of digits=%d",sum);
return 0;
}