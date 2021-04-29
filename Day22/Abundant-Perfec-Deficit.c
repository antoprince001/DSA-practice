#include<stdio.h>
int main(){
  int num;
  scanf("%d",&num);
  int sum=0;
  
  for(int i=1;i<=num;i++){
    if(num%i == 0)
      sum=sum+i;
  }
  
  if(sum>num)
    printf("Abundant Number");
  else if(sum==num)
    printf("Perfect number");
  else
    printf("Deficient Number");
  
  return 0;
}
