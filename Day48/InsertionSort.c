void insert(int ar[], int i)
    {
        // Your code here  
        int key;
        key= ar[i];
        int j=i-1;
        while(j>=0 && ar[j]>key){
            ar[j+1]=ar[j];
            j=j-1;
        }
        ar[j+1]=key;
        
    }
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        //code here
        
        for(int i=1;i<n;i++){
            insert(arr,i);
        }
    }
