// Implement strStr().

// Return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

int strStr(char * haystack, char * needle){

    int i=0,j=0,m,flag=0;
    if(strcmp(needle,"")==0){
        return 0;
    }
    // if(sizeof(haystack)<1){
    //     return 0;
    // }
    while(haystack[i]!='\0'){
        
        if(needle[0] == haystack[i]){
            j=0;
            m=i;
            flag=0;
            while(needle[j]!='\0'){
               if(needle[j]==haystack[m]){
                   j++;
                   m++;
               } 
               else{
                   flag=1;
                   break;
               }
            
            }
            if(flag==0){
                return i;
            }
        }
       i++; 
    }
    return -1;
}
