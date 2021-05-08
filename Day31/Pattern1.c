/*

    *
   **
  ***
 ****
*****

*/
#include <stdio.h>

int main()
{
    int num,row,col,space;

    
    scanf("%d",&num);
    
    for(row=1;row <= num; row++,printf("\n")){
        for(space=1; space <= num - row ;space++)
            printf(" ");
        for(col=1;col<=row;col++)
            printf("*");
        
      }
    
    
    
    
    return 0;
}
