/* The odd numbers should be in start and even numbers in the end without the change in order in array */
#include <stdio.h>

int main()
{
    
    int SIZE,ind,itr;
    scanf("%d",&SIZE);
    int arr[SIZE];
    
    for(ind =0;ind<SIZE;ind++){
        scanf("%d",&arr[ind]);
    }
    int range = SIZE-1,shft;
    
    while(itr<= range){
        if(arr[i]%2!=0){
            int temp = arr[i];
            for(shft=itr;shft<SIZE-1;shft++){
                arr[shft] = arr[shft]+1;
            }
            arr[SIZE-1]=temp;
            range--;
        }
        else
          itr++;
    }
    
    for(ind =0;ind<SIZE;ind++){
        printf("%d",arr[ind]);
    }
    return 0;
}
