#include <stdio.h>
void stringcopy(char *str1,char *str2,int ind){
    if(str1[ind] == '\0'){
        str2[ind]= '\0';
    }
    else{
        str2[ind]=str1[ind];
        stringcopy(str1,str2,ind+1);
    }
}
int main()
{
    char str1[10000],str2[1000];
    scanf("%[^\n]s",str1);
    stringcopy(str1,str2,0);
    printf("%s",str2);
    return 0;

}
