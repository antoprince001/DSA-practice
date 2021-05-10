/* 
4
1      1
12    21
123  321
12344321
*/

#include <stdio.h>

int main()
{
    int n,row,col,space,v,a;
    scanf("%d",&n);
    
    for(row=1;row<=n;row++,printf("\n")){
       
        
        for(col=1;col<=row;col++)
            printf("%d",col);
        for(space=1;space<=2*(n-row);space++)
            printf(" ");
        for(col=row;col>=1;col--)
            printf("%d",col);
        
    }
    
    
    return 0;
}
