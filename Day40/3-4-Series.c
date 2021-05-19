// 3 4 33 34 43 44 
#include <stdio.h>

int main()
{
    int n,b=1,ans=0;
    scanf("%d",&n);
    while(n){
        if(n%2==1){
            ans=ans+3*b;
        }
        else{
            ans = ans+4*b;
        }
        n=(n-1)/2;
        b=b*10;
        
        }
    printf("%d ",ans);
    
    
    

    return 0;
}
