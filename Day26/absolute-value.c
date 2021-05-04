#include<stdio.h>
#include<math.h>
int main(){
  
  int val;
  scanf("%d",&val);
  absolute = val>0?val:val*-1;
  
  printf("%d",absolute);
  
  // Using built in function
  
  absolute = abs(val);
  printf("%d",absolute);
 
  return 0;
}
