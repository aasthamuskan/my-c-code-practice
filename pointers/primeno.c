#include<stdio.h>
int main(){
    int a,*p,count=0;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    p = &a;  
    for (int i=1;i<a;i++){
        if(a%i==0)
        count++;
    }
    if(count == 2){
        printf("prime no");}
    else{
        printf("not a prime no");
    }
    return 0;

}