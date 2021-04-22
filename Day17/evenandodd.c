#include <stdio.h>

int main()
{
    int n,odd=0,even=0;
    int arr[100];
    scanf("%d ",&n);
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2!=0){
            odd++;
        }
        else{
            even++;
        }
        
    }
    printf("%d %d",even,odd);
    

    return 0;
}
