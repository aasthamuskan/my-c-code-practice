#include<stdio.h>
int sum(int a,int b){
    return a+b;
}
int main(){
    int a,b;
    printf("enter the no: ");
    scanf(" %d  %d",&a,&b);
   // sum(a,b);
   //printf("%d",sum(a,b));
    int add = sum(a,b);
    printf("%d",add);
    return 0;
}//code chal hi nhi raha