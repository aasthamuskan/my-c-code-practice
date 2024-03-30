#include<stdio.h>
#include<ctype.h>
int main(void)
{
    int chr,uc=0,lc=0,oc=0;
    while (chr = getchar() != EOF) {
        if (isupper(chr)) 
        uc++;
        else if (islower(chr))
        lc++;
        else 
        oc++;
        }
        printf("Uppercase : %d\n",uc);  
        printf("Lowercase : %d\n,",lc);    
        printf("Others    : %d\n",oc);          
         return 0;
}

