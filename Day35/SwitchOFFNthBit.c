#include <stdio.h>

int main()
{
    int n,bitoff,val=1;
    scanf("%d %d",&n,&bitoff);
    
    val = val << (bitoff-1);
    
    printf("%d",n^val);
    
   

    return 0;
}
