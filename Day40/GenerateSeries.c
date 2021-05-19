// Alternate series of multiples of 2 and 3  => 1 1 2 3 4 9 8 27
#include <stdio.h>

int main()
{
    int n,i,pow1=1,pow2=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2==1){
          printf("%d ",pow1);
          pow1=pow1*2;
        }
        else{
            printf("%d ",pow2);
            pow2=pow2*3;
        }
    }
    
    return 0;
}
