// Given an array that contains both postive and negative integers, find the product of maximum product subarray. Time Complexity O(n) Space Complexity O(1)
#include<stdio.h>
int main(){

  int n,prod=1,maxProd=1;
  scanf("%d",&n);
  int arr[n];
  
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  for(int i=0;i<n;i++){
    prod *= arr[i];
    if(prod == 0)
      prod =1 ;
    
    maxProd = (prod>maxProd ? prod : maxProd);
  }
  printf("%d",maxProd);
  return 0;
}
