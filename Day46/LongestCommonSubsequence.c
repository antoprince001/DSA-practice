
#include <stdio.h>
#include<stdlib.h>
int max(int a,int b){
    return a>b?a:b;
}
int main()
{
    int m,n;
    char *a,*b;
    scanf("%d %d",&m,&n);
    a = (char *)malloc(m*(sizeof(char)));
    b = (char *)malloc(n*(sizeof(char)));
    scanf("%s",a);
    scanf("%s",b);
    
    int lcs[m+1][n+1];
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            
            if(i==0 || j==0 ){
                lcs[i][j]=0;
            }
            else if(a[i-1]==b[j-1]){
                lcs[i][j] = 1 + lcs[i-1][j-1];
            }
            else{
                lcs[i][j] = max(lcs[i-1][j],lcs[i][j-1]);
            }
        }
    }
    printf("%d",lcs[m][n]);

    return 0;
}
