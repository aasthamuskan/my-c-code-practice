#include<stdio.h>
int main(){
    int i,x,a=0;
    scanf("%d",&i); x=i;
    while(i>0){
        a=a+i%10*i%10*i%10;//last digit ko 3 bar le lia taki yahi pe cube ho zai ;
        i=i/10;
    }
    if(a==x){
        printf("its a armstrong number.");
    }else{
        printf("nothing");
    }
    return 0;
}