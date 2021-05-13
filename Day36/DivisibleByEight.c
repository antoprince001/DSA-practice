#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    
    if((n&7)==0){
        printf("Divisible by 8");
    }
    else{
        printf("Not Divisible by 8");
    }

    return 0;
}
