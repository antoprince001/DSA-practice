#include<stdio.h>
int main(){

  int num,div = 5, sum = 0;
  scanf("%d",&num);
  
  while(num/div){
    
    sum = sum+(num/div);
    div = div*5;
  }
  
  printf("%d",sum);
  
  return 0;
}
