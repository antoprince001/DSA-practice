#include <stdio.h>
int main()
{
    int n,q,x;
    int hash[100001] = {0};
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        hash[x]++;
    }
    for(int i=1;i<100001;i++){
        hash[i] = hash[i]+hash[i-1];
    }
    scanf("%d",&q);
    for(int i=0;i<q;i++){
        scanf("%d",&x);
        if(x>100000){
            printf("%d\n",n);
        }
        else{
            printf("%d\n",hash[x]);
        }
    }
    return 0;
}
