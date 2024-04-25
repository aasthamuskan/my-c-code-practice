#include<stdio.h>
int main(){
    int a[10],i;
    for (i=0;i<10;i++){
        printf("\nEnter number: ");
        scanf("%d",&a[i]);

    }
    int *p=&a[0];
    for(i=0;i<10;i++){
        printf("\n%d",a[i]);//to convert this in pointer we just need to change a[i] to (p+i)

    }
    return 0;
    }
