#include<stdio.h>
int main(){
    int a[10],i,f=0,key;
    for (i=0;i<0;i++){
        printf("\nEnter Number: ");
        scanf("%d",&a[i]);
        }
    printf(" Enter the number you want frequency:");
    scanf("%d",&key);
    for(i=0;i<=9;i++)
      if(a[i]==key)
          f++;
    printf("\n%d Appears %d Times In The Array.", key, f); 
    return 0;  
    

}