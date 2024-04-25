#include<stdio.h>
int main(){
    int a[10],i,flag=0,key,pos;
    for (i=0;i<10;i++);
    scanf("%d",&a[i]);
    printf("\nenter the no to search");
    scanf("%d",&key);
    for(i=0;i<10;i++)
    {
        if(a[i]==key){
            pos=i+1;
            flag=1;
            break;
        }

    }
    if(flag==1){
        printf("\nNumber  is found at position %d",pos);
    }else{
        printf("number not found");
    }
    return 0;
}