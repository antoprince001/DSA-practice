/* For given array, find minimum swaps such that the array is split into values lesser than k in left and greater than to right */
#include <stdio.h>

int main()
{
    
    int SIZE,ind,itr,key;
    scanf("%d",&SIZE);
    int arr[SIZE];
    
    for(ind =0;ind<SIZE;ind++){
        scanf("%d",&arr[ind]);
    }
    scanf("%d",&key);
    
    int left = 0, right = SIZE-1,swap=0;
    
    while(left < right){
        
        while(arr[left]<=key) left++;
        while(arr[right]>key) right++;
        if(left<right){
            swap++;
            left  = left+1;
            right = right-1;
        }
    }
    
        printf("%d",swap);
    
    return 0;
}
