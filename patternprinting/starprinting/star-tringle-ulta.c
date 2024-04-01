#include<stdio.h>
int main(){
    int n;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n+1-i;j--){
            printf("%d",i);
        }
        printf("\n");
    }

}