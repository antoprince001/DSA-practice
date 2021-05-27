void heapify(int arr[], int n, int i) {
    // Find largest among root, left child and right child
    int temp;
    int largest = i;
    int l = 2*i + 1;
    int r = 2*i + 2;
    
    if(l<n && arr[largest]<arr[l]){
        largest = l;
    }
    
    if(r<n && arr[largest]<arr[r]){
        largest = r;
    }
    
    if(largest != i){
         temp = arr[largest];
         arr[largest] = arr[i];
         arr[i] = temp;
         
         heapify(arr,n,largest);
    }
    
}

// Main function to do heap sort
void buildHeap(int arr[], int n) {
    // Build max heap
    int temp;
    
    for(int i = n / 2 - 1;i>=0;i--){
        heapify(arr,n,i);
    }
    for(int i= n - 1 ;i>0;i--){
        
        temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;
        
        heapify(arr,i,0);
    }
}
