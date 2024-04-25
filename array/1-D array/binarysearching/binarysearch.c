#include<stdio.h>



int binarysearch(int a[],int n,int data){
    int l,r,n,mid;
    int a[mid];
    l=0;
    r=n-1;
    while(l<r){
        mid = ((l+r)/2);
        if(data==a[mid]){
            return mid;
        }else if(data<a[mid]){
            r=mid-1;
        }else{
            l=mid+1;
        }

    }
    return -1;
}
