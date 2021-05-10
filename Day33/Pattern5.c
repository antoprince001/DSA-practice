/* 

12345
21234
32123
43212
54321

*/

#include <stdio.h>

int main()
{
    int n,row,col,space,v,a;
    scanf("%d",&n);
    
    for(row=1;row<=n;row++,printf("\n")){
       
        v = row;
        a=2;
        for(col=1;col<=row;col++)
            printf("%d",v--);
        for(space=1;space<=n-row;space++)
        printf("%d",a++);
        
    }
    
    
    return 0;
}
