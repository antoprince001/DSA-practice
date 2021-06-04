int matSearch (int N, int M, int matrix[][M], int x)
{
    for(int i=0;i<N;i++){
        
        //if(x>=matrix[i][0] && x<=matrix[i][M-1]){
        for(int j=0;j<M;j++){
           if(x == matrix[i][j]){
               return 1;
           } 
        }
        //}
    }
    return 0;
}
