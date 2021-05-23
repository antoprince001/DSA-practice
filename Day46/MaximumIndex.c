// Find max j-i where A[i]<=A[j]

#include <stdio.h>
#include<stdlib.h>
int main()
{
    int num,max=0,temp;
    
    scanf("%d",&num);
    int *arr = (int *)malloc(num*sizeof(int));
    
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<num;i++){
        for(int j=i+1;j<num;j++){
        
            if(arr[i]<=arr[j]){
                temp = j-i;
            }
            else{
                temp=i-j;
            }
            
            if(temp>max){
                max=temp;
            }
        }
        
    }
    printf("%d",max);
    return 0;
}


