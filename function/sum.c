#include<stdio.h>
int sum(int s,int e){
    if (s>e)
    return 0;
    else
        return s + sum(s+1,e);
}
int main(){
    printf("%d",sum(2,5));
    return 0;

}