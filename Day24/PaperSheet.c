/* Paper cut 
    Given height, width find minimum folds required to reach new height, new width
    
    Methods:
    1 => Use ceil
    2 => Arithmetic operator
    3 => Bitwise operator
    4 => Logarithm
*/
#include <stdio.h>
int minfoldingcount(int org,int fin){
    
    int count=0;
    while(org>fin){
        if(org&1 == 1){
            org = (org>>1) + 1;
        }
        else{
            org = org>>1;
        }
        count++;
    }
    return count;
}
int main()
{
    int originalheight,originalwidth,finalheight,finalwidth;
    int height,width;
    
    scanf("%d %d",&originalheight,&originalwidth);
    scanf("%d %d",&finalheight,&finalwidth);
    
    height = minfoldingcount(originalheight,finalheight);
    width = minfoldingcount(originalwidth,finalwidth);
    
    printf("%d",height+width);

    return 0;
}
