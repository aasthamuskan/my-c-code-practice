#include<stdio.h>
int main(){
    int a[10],*p,sum=0;
    for(int i=0;i<=9;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    p=&a[0];
    for (int i=0 ;i<10;i++)
    sum+=*(p+i)
    return 0;  


}