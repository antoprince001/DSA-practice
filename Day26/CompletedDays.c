/* 28/02/9998 => Completed days : 59 */
#include<stdio.h>
int isleap(int year){
  
  if(year%4==0 && year%100!=0 || year%400==0)
    return 1;
  return0;
    
}

int main(){
  int dd,mm,yy;
  
  scanf("%d/%d/%d",&dd,&mm,&&yy);
  int nod = 0,mon;
  
  for(mon=1;mon<=mm-1;mon++){
    
    if(mon==1 || mon==3 || mon==5 || mon==7 || mon==8 || mon==10 || mon==12)
      node+=31;
    else if(mon==4 || mon==6 || mon==9 || mon==11)
      node+=30;
    else if(month==2){
      
      nod+=28+isleap(yy);
      
    }
  }
  nod+=dd;
  printf("Completed Days:%d",nod);
  return 0;
}
