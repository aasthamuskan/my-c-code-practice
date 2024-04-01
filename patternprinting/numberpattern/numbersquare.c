#include<stdio.h>
void numsquar(int n){
    for (int i=1;i<=n;i++){
        for(int j = 1; j<=n;j++){
            printf("%d",i);
        }
        printf("\n");

    }
}
int main(){
    int n;
    scanf("%d",&n);
    numsquar(n);
}