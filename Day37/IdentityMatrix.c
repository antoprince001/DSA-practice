#include <stdio.h>

int main()
{

    int n,row,col,arr[100][100],a=0;
    scanf("%d",&n);
    
    for(row=0;row<n;row++){
        for(col=0;col<n;col++){
            scanf("%d",&arr[row][col]);
        }
    }
    
    for(row=0;row<n;row++){
        for(col=0;col<n;col++){
            
            if(row==col && arr[row][col]!=1){
                a=1;
                break;
            }
            if(row!=col && arr[row][col]!=0){
                a=1;
                break;
            }
        }
    }
    
    if(a==1){
        printf("Not identity matrix");
    }
    else{
        printf("Identity matrix");
    }
    
    return 0;
}
