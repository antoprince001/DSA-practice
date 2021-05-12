#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    
    if((n&3)==0){
        printf("Divisible by 4");
    }
    else{
        printf("Not Divisible by 4");
    }

    return 0;
}
