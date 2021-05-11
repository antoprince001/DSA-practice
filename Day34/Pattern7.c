/*
5
01 02 03 04 05
10 09 08 07 06
11 12 13 14 15
20 19 18 17 16
21 22 23 24 25
*/
#include <stdio.h>

int main()
{
    int n,row,col,val=1;
    scanf("%d",&n);
    
    for(row=1;row<=n;row++,printf("\n")){
        for(col=1;col<=n;col++){
            if(row%2==1)
                printf("%02d ",val++);
            else
                printf("%02d ",val--);
        }
        val = val+n;
    }
    return 0;
}
