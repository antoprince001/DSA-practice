#include<stdio.h>
#include<stdlib.h>
void print(int **mat)
{
    int row,col;
    for(row=0;row<=7;row++,printf("\n"))
       for(col=0;col<=7;col++)
          if(mat[row][col]==1)
              printf(" Q ");
          else
             printf(" - ");
    printf("\n\n");
}

int safe(int **mat,int row,int col)
{
   int i,j;
   for(i=row;i>=0;i--)
      if(mat[i][col]==1)                //vertical Direction
          return 0;
   for(i=row,j=col;i>=0&&j>=0;i--,j--)
       if(mat[i][j]==1)
           return 0;                    //Digonal Direction
   for(i=row,j=col;i>=0&&j<=7;i--,j++)
       if(mat[i][j]==1)
           return 0;                   //  Cross Direction
   return 1;
}
void Queen(int **mat,int row)
{
   int col;
  if(row==8)  
     print(mat);                      
  else
   for(col=0;col<=7;col++)              
     if(safe(mat,row,col)==1)
     {
        mat[row][col]=1;                 
        Queen(mat,row+1);
        mat[row][col]=0;               
     }
}
int main()
{
int **mat;
int row;
mat=(int**)calloc(8,sizeof(int*)); 
for(row=0;row<8;row++)
  mat[row]=(int*)calloc(8,sizeof(int));
Queen(mat,0);                                 // chess,start row  
return 0;
}
