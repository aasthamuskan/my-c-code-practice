#include<stdio.h>
int main(){
    int x,y,z,w;
    scanf("%d",&x);
   y=0;z=1,w=0;
   while(w<=z){
    printf("\nd",w);
    y=z;
    z=w;
    w=x+y;
   }
}