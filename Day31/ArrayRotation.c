
#include <stdio.h>

int main()
{
    int SIZE,ind,range,itr;
    
    scanf("%d",&SIZE);
    int arr[SIZE];
    for(ind=0;ind<SIZE;ind++){
        scanf("%d",&arr[ind]);
    }
    scanf("%d",&range);
    while(range--){
        int temp = arr[0];
        for(itr=0;itr<SIZE-1;itr++){
            arr[itr]=arr[itr+1];
        }
        arr[SIZE-1]=temp;
    }
    for(ind=0;ind<SIZE;ind++){
        printf("%d ",arr[ind]);
    }
    return 0;
    return 0;
}
