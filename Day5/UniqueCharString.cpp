// Given a string s, return the first non-repeating character in it and return its index. If it does not exist, return -1.
class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> c;
        
        for(int i=0;i<s.length();i++){
            if(c.find(s[i]) != c.end()){
                c[s[i]]++;
            }
            else{
                c[s[i]]=1;
            }
        }
        for(int i=0;i<s.length();i++){
            if(c[s[i]]==1){
                return i;
            }
        }
        return -1;
    }
};
