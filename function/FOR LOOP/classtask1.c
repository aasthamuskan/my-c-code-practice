#include<stdio.h>
void func1(){
    auto int a=10;
    printf("\na=%d",a);
}
void func2(){
    auto int a=20;
    printf("\na=%d",a);
}
int main(){
    auto int a=30;
    func1();
    func2();
    printf("\na=%d",a);
    return 0;
}
