#include<stdio.h>
void oddeven(int*);
int main(){
    int a,*q;
    printf("\nenter two number: ");
    scanf("%d",&a);
    q=&a;
    oddeven(q);
    return 0;

}
void oddeven(int *q){
    if(*q%2==0){
        printf("even");

    }
    else{
        printf("odd");
    }
}