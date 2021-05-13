#include <stdio.h>

int main()
{
    int n,c=0,b=1;
    scanf("%d",&n);
    
    while(n/b){
       
       c=c+1;
       b=b<<1;
    
    }
    printf("No of leading zeroes : %d",32-c);
    return 0;
}
