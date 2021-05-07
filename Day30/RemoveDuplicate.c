#include <stdio.h>

int main()
{
    
    int SIZE,ind;
    
    scanf("%d",&SIZE);
    int arr[SIZE];
    
    for(ind=0;ind<SIZE;ind++){
        scanf("%d",&arr[ind]);
    }

    for(ind=0;ind<SIZE-1;ind++){
        for(int j=ind+1;j<SIZE;j++){
            if(arr[ind]==arr[j]){
                for(int k=j;k<SIZE-1;k++){
                    arr[k]=arr[k+1];
                }
                SIZE--;
            }
        }
    }
    for(ind=0;ind<SIZE;ind++){
        printf("%d ",arr[ind]);
    }
    return 0;
}
