//Given two strings s and t, return true if t is an anagram of s, and false otherwise.

bool isAnagram(char * s, char * t){
    int a[26] = {0};
    
    if(sizeof(s) != sizeof(t)){
        return false;
    }
    for(int i=0;s[i]!='\0';i++){
        a[s[i]-97]++;
    }
    for(int i=0;t[i]!='\0';i++){
        a[t[i]-97]--;
    }
    for(int i=0;i<26;i++){
        if(a[i]!=0){
            return false;
        }
    }
    return true;
}
