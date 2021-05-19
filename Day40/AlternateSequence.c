// 0 0 2 1
// Alternate even numbers and whole numbers sequence
#include <stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2==1){
          printf("%d ",i-1);  
        }
        else{
            printf("%d ",((i/2)-1));
        }
    }
    
    return 0;
}
