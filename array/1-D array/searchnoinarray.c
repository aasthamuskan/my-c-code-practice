#include<stdio.h>
int main(){
    int a[10],i,j,k,flat=0;
    for (i=0;i<10;i++){
        printf("enter the number: ");
        scanf("%d",&a[i]);

    }
    printf("enter the no to serch%d",j);
    scanf("%d",&j);
    for  (i=0;i<10;i++){
        if (a[i]==j){
            k=j+1;
            flat=1;
            break;
        }
    }
    if(flat == 1)
        printf("\nThe element is present at index %d.",k);
    else
        printf("\nThe element is not present in array.");
    return 0;
}