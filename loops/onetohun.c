#include<stdio.h>
int main(){
    for (int i=1;i<=100;i++){
    int dig = i%2!=0;
    if(dig) printf("%d",i);
    return 0;
}
}