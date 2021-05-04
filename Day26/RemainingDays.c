// Remaining Days => 01/01/2019 : 364
#include <stdio.h>
int isleap(int year){
  
  if(year%4==0 && year%100!=0 || year%400==0)
    return 1;
  return 0;
    
}

int main()
{
    int dd,mm,yy,itr,nod=0;
    int mon[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31};
    scanf("%d/%d/%d",&dd,&mm,&yy);
    
    for(itr=mm;itr<=12;itr++){
        if(itr == 2){
            nod+=mon[itr]+isleap(yy);
        }
        else{
            nod+=mon[itr];
        }
    }
    nod -= dd;
    printf("%d",nod);
    return 0;
}
