#include<stdio.h>
int main(){
    int m,temp,flag=0;
    int a[m];
    for(int i=0;i<m-1;i++){
        flag=0;
        for(int j=0;j<m-1-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag+=1;
            }
        }if(flag==0){
            break;
        }
    }
}