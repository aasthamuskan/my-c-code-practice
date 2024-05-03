#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int z = a*a;
    int sum=0;
    while (z>0){
        sum +=  z%10;
        z /= 10;
    }      
    
if(sum==a){
    printf("%d is a neon number",a);
}else{
    printf("%d is not a neon number",a);
}
return 0;
}
