#include <stdio.h>

int main()
{
    int n,ans=0,base=1;
    scanf("%d",&n);
    
    while(n/base){
       base=base<<1;
    }
    base = base>>1;
    
    while(base){
        ans = ans*10 + (n/base);
        n=n%base;
        base=base>>1;
    }
    printf("Binary Form : %d",ans);
    return 0;
}
