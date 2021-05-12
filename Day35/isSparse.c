// Sparse No - No Consecutive 1
#include <stdio.h>

int main()
{
    int n,c=0,flag=0;
    scanf("%d",&n);
    
    while(n){
        if((n&1)==1){
            c=c+1;
        }
        else
            c=0;
        
        if(c==2){
            flag=1;
            break;
        }
        n=n>>1;
    }
    if(flag==1){
        printf("False");
    }
    else{
        printf("True");
    }

    return 0;
}
