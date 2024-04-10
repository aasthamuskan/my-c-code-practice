#include<stdio.h>
int main(){
    int a[10],i,e,o;
    for(i=0;i<10;i++){
        printf("enter the number: ");
        scanf("%d",&a[i]);
    }
    for (i=0;i<10;i++){
        if(a[i]%2==0){
            e++;
        }else{
            o++;
        }
    }printf("\nTotal even=%d an d total odd =%d",e,o);
    return 0;
}