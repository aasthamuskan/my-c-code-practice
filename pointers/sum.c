#include<stdio.h>//pointers always starts with star sign;
int main(){
    int a,b,*p,*q,c;
    printf("\nenter two number: ");
    scanf("%d  %d",&a,&b);
    p=&a;
    q=&b;
    c=*p+*q;/*here * is used to get the value of variable which pointer pointing at*/

}
