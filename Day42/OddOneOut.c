// In first n odd numbers, find the missing odd number
#include <stdio.h>

int main()
{
    long long int N,arr[1000000],ind,sum;
    scanf("%lld",&N);
    
    sum = N*N;
    
    for(ind=0;ind<N-1;ind++){
        scanf("%lld",&arr[ind]);
    }
    for(ind=0;ind<N-1;ind++){
        sum-=arr[ind];
    }
    
    printf("%lld",sum);
    

    return 0;
}
