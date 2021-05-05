// Bitonic Array - Increasing to Decreasing/ Decreasing to Increasing
#include <stdio.h>

int main()
{
    int SIZE, ind, flag = 0,itr;
    scanf("%d",&SIZE);
    int arr[SIZE];
    
    for(ind=0;ind< SIZE;ind++){
        scanf("%d",&arr[ind]);
    }
    
    if(arr[0] < arr[1]){
        for(itr=0;arr[itr]<arr[itr+1] && itr<SIZE-1;itr++);
        if(itr == SIZE-1){
            flag = 1;
        }
        else
        for(ind=itr;ind<SIZE-1;ind++){
            if(arr[ind] < arr[ind+1]){
                flag++;
                break;
            }
        }
    }
    else if(arr[0] > arr[1]){
        for(itr=0;arr[itr]>arr[itr+1] && itr<SIZE-1;itr++);
        if(itr==0){
            flag = 1;
        }
        if(itr == SIZE-1){
            flag = 1;
        }
        else
        for(ind=itr;ind<SIZE-1;ind++){
            if(arr[ind] > arr[ind+1]){
                flag++;
                break;
            }
        }
    }
    else
        flag++;
    (flag == 0 )?printf("Bitonic"):printf("Not Bitonic");
    
    return 0;
}
