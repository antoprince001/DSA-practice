#include <stdio.h>
#include <stdlib.h>
int main()
{
    
    int SIZE,ind,k,key,itr;
    
    scanf("%d",&SIZE);
    int arr[SIZE],diff[SIZE];;
    
    for(ind=0;ind<SIZE;ind++){
        scanf("%d",&arr[ind]);
    }
    scanf("%d",&key);
    scanf("%d",&k);
    for(ind=0;ind<SIZE;ind++){
        diff[ind] = abs(key-arr[ind]);
    }
    for(ind=0;ind<SIZE;ind++){
        for(itr=0;itr<SIZE-1;itr++){
            if(diff[itr]>diff[itr+1]){
                int temp = diff[itr];
                diff[itr] = diff[itr+1];
                diff[itr+1] = temp; 
                
                temp = arr[itr];
                arr[itr] = arr[itr+1];
                arr[itr+1] = temp; 
            }
        }
    }
    for(itr=1;itr<=k;itr++){
        printf("%d ",arr[itr]);
    }
    return 0;
}
