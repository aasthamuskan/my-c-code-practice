#include<stdio.h>
void pass_array_tofunction(int[]);
int main(){
    int arr[5]={5,6,8,12,10};
    pass_array_tofunction(arr);

}
void pass_array_tofunction(int a[]){
    for (int i=0;i<5;i++){
        printf("%d",a[i]);
    }
}