#include <stdio.h>

int SolveEquation(int a,int b,int c){
    int sol;
    
    sol = (a+b+c)*(a+b+c);
    return sol;
}
int main()
{
    int out=0;
    
    out = SolveEquation(2,3,4);
    
    printf("%d",out);

    return 0;
}
