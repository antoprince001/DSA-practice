#include <stdio.h>

int main()
{
    int n,biton,val=1;
    scanf("%d %d",&n,&biton);
    
    val = val << (biton-1);
    
    printf("%d",n|val);
    
   

    return 0;
}
