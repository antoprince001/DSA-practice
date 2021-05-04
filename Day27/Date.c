// Date- Years,Weeks,Days
#include <stdio.h>

int main()
{
    int nod;
    scanf("%d",&nod);
    int years = nod/365;
    int weeks = (nod%365)/7;
    int days = (nod%365)%7;
    
    printf("Number of years:%d\n",years);
    printf("Number of Weeks:%d\n",weeks);
    printf("Number of days:%d\n",days);
    
    return 0;
}
