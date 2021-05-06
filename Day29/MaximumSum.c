/* Find the max sum of product of index and value with all rotations considered */

#include <stdio.h>

int main()
{
    
    int SIZE,ind,itr;
    scanf("%d",&SIZE);
    int arr[SIZE];
    
    for(ind =0;ind<SIZE;ind++){
        scanf("%d",&arr[ind]);
    }
    int max = 0;
    
    for(itr=0;itr<=SIZE;itr++){
        int sum=0;
        for(ind=0;ind<SIZE;ind++){
            sum+=(arr[ind]*((ind+itr)%SIZE));
            
        }
        if(sum>max){
            max = sum;
        }
    }
    printf("%d",max);
    return 0;
}
