#include <stdio.h>

int main()
{
    int n,c=0;
    scanf("%d",&n);
    
    while(n){
        
    if((n&1)==0){
     c=c+1;
    }
    else{
        break;
        
    }
    n=n>>1;
    }
    printf("No of trailing zeroes : %d",c);
    return 0;
}
