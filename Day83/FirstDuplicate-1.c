#include <stdio.h>

int main()
{
    int n=6,minnext=6;
    int arr[] = {2,1,3,5,3,2};
    for (int i=0;i<n-1;i++) {
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                minnext = minnext>j?j:minnext;
            }
        }
    }
    if(minnext == n){
        printf("%d",-1);
    }
    else{
        printf("%d",arr[minnext]);
    }

    return 0;
}
