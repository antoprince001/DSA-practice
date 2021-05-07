/* Given no of rotations n and an array, rotate the second half of the array by n */ 
#include <stdio.h>

int main()
{
    
    int SIZE,NOR,ind,itr;
    
    scanf("%d",&SIZE);
    int arr[SIZE];
    
    for(ind=0;ind<SIZE;ind++){
        scanf("%d",&arr[ind]);
    }
    scanf("%d",&NOR);
    
    if(SIZE%2==0){
        NOR = NOR % (SIZE/2);
    }
    else{
        NOR = NOR %(SIZE/2+1);
    }
    while(NOR--){
        int temp = arr[SIZE/2];
        for(itr=SIZE/2;itr<SIZE-1;itr++){
            arr[itr]=arr[itr+1];
        }
        arr[itr]=temp;
    }
    printf("Rotated array is\n");
    for(ind=0;ind<SIZE;ind++){
        printf("%d ",arr[ind]);
    }
    return 0;
}
