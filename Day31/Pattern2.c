*****
*   *
*   *
*   *
*****

*/
#include <stdio.h>

int main()
{
    int num,row,col,space;

    
    scanf("%d",&num);
    
    for(row=1;row <= num; row++,printf("\n")){
        
        for(col=1;col<=num;col++){
          
          if(row==1 || col==1 || row==num || col==num){
              printf("*");
          }  
          else
            printf(" ");
        }
            
        
      }
    
    
    
    
    return 0;
}
