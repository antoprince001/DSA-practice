#include<stdio.h>
#include<stdlib.h>
int visit[4][4]={0};
int maze(int **path,int row,int col)
{
    if(path[row][col]==9)
    {
        visit[row][col]=1;
         return 1; 
    }                              // base condition
    if(path[row][col]==1)
    {
        visit[row][col]=1;
        if(col+1<4 && visit[row][col+1]==0 && maze(path,row,col+1)==1)
                   return 1;                //Right
        if(row+1<4 && visit[row+1][col]==0 && maze(path,row+1,col)==1)
                   return 1;                //Bottom
        if(col-1>=0 && visit[row][col-1]==0 && maze(path,row,col-1)==1)
                   return 1;                //Left
        if(row-1>=0 && visit[row-1][col]==0 && maze(path,row-1,col)==1)
                   return 1;                //TOP
        visit[row][col]=0;
        return 0;
    }
    else
      return 0;
}
void print()
{
  int row,col;
  for(row=0;row<4;row++,printf("\n"))
    for(col=0;col<4;col++)
      printf("%d ",visit[row][col]);
}
int main()
{
int **path;    
int row,col;
path=(int**)malloc(4*sizeof(int*));
for(row=0;row<4;row++)
  path[row]=(int*)malloc(4*sizeof(int));           //dynamic_allocation
for(row=0;row<4;row++)
  for(col=0;col<4;col++)
     scanf("%d",&path[row][col]);                 //get the matrix value
printf("\n\n");
if(maze(path,0,0)==1) 
   print();
else
   printf("No path");
return 0;
}
