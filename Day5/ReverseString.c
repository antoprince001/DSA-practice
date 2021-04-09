

void reverseString(char* s, int sSize){
    int n=0;
    char temp;
    while(n<sSize/2){
        temp = *(s+n);
        *(s+n)= *(s+sSize-n-1);
        *(s+sSize-n-1)=temp;
        n++;
    }
}
