class Solution {
  public:
    vector<int> increment(vector<int> arr ,int N) {
        // code here
        int i;
        for(i=N-1;i>=0;i--){
            if(arr[i] == 9){
                arr[i] = 0;
            }
            else{
                arr[i] = arr[i] + 1;
                break;
            }
        }
        if(i<0){
            
            arr.insert(arr.begin(),1);
        }
        
        return arr;
    }
};
