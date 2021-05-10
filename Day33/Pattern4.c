/* 
3
333
313
323

4
4444
4414
4424
4434




*/

#include <stdio.h>

int main()
{
    int n,row,col,space,val;
    scanf("%d",&n);
    
    for(row=1;row<=n;row++,printf("\n")){
       
        for(col=1;col<=n;col++)
            if(col==(n/2)+1 && row!=1)
                printf("%d",row-1);
            else
                printf("%d",n);
    }
    
    
    return 0;
}
