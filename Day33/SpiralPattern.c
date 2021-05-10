/* spiral
222
212
222


4444444
4333344
4322234
4321234
4322234
4333334
4444444
*/

#include <stdio.h>

int main()
{
    int n,row,col,space,val;
    scanf("%d",&n);
    
    for(row=n;row>=1;row--,printf("\n")){
        for(space=n;space>row;space--)
            printf("%d",space);
        for(col=1;col<=2*row-1;col++)
            printf("%d",row);
        for(val=row+1;val<=n;val++)
            printf("%d",val);
    }
    for(row=2;row<=n;row++,printf("\n")){
        for(space=n;space>row;space--)
            printf("%d",space);
        for(col=1;col<=2*row-1;col++)
            printf("%d",row);
        for(val=row+1;val<=n;val++)
            printf("%d",val);
    }
    
    return 0;
}
