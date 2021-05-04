// Date- Differnce in date
#include <stdio.h>
int isleap(int year){
  
  if(year%4==0 && year%100!=0 || year%400==0)
    return 1;
  return0;
    
}
int main()
{
    int dd1,mm1,yy1,dd2,mm2,yy2,itr;
    int mon[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31};
    scanf("%d/%d/%d",&dd1,&mm1,&yy1);
    scanf("%d/%d/%d",&dd2,&mm2,&yy2);
    
    if(yy1< yy2 && mml<13 && mm2<13 && dd1<32 && dd2<32){
        for(itr=mm1;itr<=12;itr++){
            if(itr==2){
                nod+=mon[itr]+isleap(yy1);
            else
                nod+=mon[itr];
            }
        }
        nod -= dd1;
        for(itr=yy1+1;itr<=yy2-1;itr++){
            nod+= 365+isLeap(itr);
        }
        for(itr=1;itr<mm2;itr++){
            if(itr==2){
                nod+=mon[itr]+isleap(yy2);
            else
                nod+=mon[itr];
            }
        }
        nod+=dd2;
        printf("%d",nod);
    }
    else
        return 0;
    return 0;
}
