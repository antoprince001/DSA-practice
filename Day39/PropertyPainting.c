/*
We want to estimate the cost of painting a property.
Interior wall painting cost is Rs.18 per sq.ft. and exterior wall painting cost is Rs.12 per sq.ft.
Take input as
1. Number of Interior walls
2. Number of Exterior walls
3. Surface Area of each Interior Wall in units of square feet
4. Surface Area of each Exterior Wall in units of square feet
If a user enters zero  as the number of walls then skip Surface area values as User may don’t  want to paint that wall.
Calculate and display the total cost of painting the property
*/

#include<stdio.h>
 int main(){
     int noOfIn,noOfOut;
     float cost=0;
     
     scanf("%d %d",&noOfIn,&noOfOut);
     float areaIn, areaOut;
     if(noOfIn != 0){
     for(int i=0;i<noOfIn;i++){
         scanf("%f",&areaIn);
         cost += areaIn*18.0;
     }
     }
     if(noOfOut!=0){
     for(int i=0;i<noOfOut;i++){
         scanf("%f",&areaOut);
         cost += areaOut*12.0;
     }
     }
     printf("Total estimated Cost:%.1f",cost);
     return 0;
 }
