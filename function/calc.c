#include<stdio.h>
int func(int n){
    if(n<=0){
        return 0;

    }
    else{
        return 3 *  func(n-1) + 1;
    }
}
int main(){
    printf("%d",func(8));
    return 0;
}