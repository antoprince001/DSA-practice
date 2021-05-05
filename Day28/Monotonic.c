// Array should be in ascending / descending
#include <stdio.h>

int main()
{
    int SIZE, ind, flag = 0;
    scanf("%d",&SIZE);
    int arr[SIZE];
    
    for(ind=0;ind< SIZE;ind++){
        scanf("%d",&arr[ind]);
    }
    
    if(arr[0] < arr[1]){
        for(ind=1;ind<SIZE-1;ind++){
            if(arr[ind] > arr[ind+1]){
                flag++;
                break;
            }
        }
    }
    else{
        for(ind=1;ind<SIZE-1;ind++){
            if(arr[ind] < arr[ind+1]){
                flag++;
                break;
            }
        }
    }
    (flag == 0 )?printf("Monotonic"):printf("Not Monotonic");
    
    return 0;
}
