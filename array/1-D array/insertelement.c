#include<stdio.h>
int main(){
    int arr,n;
    pass_array_tofunction(arr, n);

}
void pass_array_tofunction(int a[],int x){
    for (int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for (int i=0;i<x;i++){
        printf("%d",a[i]);
    }
}