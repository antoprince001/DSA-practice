/* Sum of next k elements and their average (if next k beyond array limit use circular index to get element from start */

#include <stdio.h>

int main()
{
    int SIZE,ind,K,itr;
    
    scanf("%d",&SIZE);
    int arr[SIZE];
    for(ind=0;ind<SIZE;ind++){
        scanf("%d",&arr[ind]);
    }
    scanf("%d",&K);
    
    for(itr=0;itr<SIZE;itr++){
        int sum=0;
        for(ind=itr;ind<itr+K;ind++){
            sum+=arr[ind%SIZE];
        }
        printf("%.2f ",(float)sum/K);
    }
    
    return 0;
}
