#include<stdio.h>
int main(){
    int a[10],i,j,t;
    for(i=0;i<10;i++){
        printf("enter the number: ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<9;i++)
    for(j=i+1;j<10;j++)
    if(a[i]>a[j]){
        t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
    printf("the sorted array is:\n");
    for(i=0;i<10;i++)
    printf( "%d\t",a[i]);
    return 0;
}
