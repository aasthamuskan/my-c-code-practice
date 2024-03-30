#include<stdio.h>
int recur(int n){
    if (n<=0){
        return 0;
    }else{
        return n + recur(n-1);
    }
}
int main(){
    printf("%d",recur(12));
    return 0;
}