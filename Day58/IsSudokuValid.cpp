class Solution{
public:
    int isValid(vector<vector<int>> mat){
        // code here
        int row[9][9] , col[9][9] , block[3][3][9];
        
        memset(row,0,sizeof(row));
        memset(col,0,sizeof(col));
        memset(block,0,sizeof(block));
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                
                int val = mat[i][j]-1;
                if(mat[i][j]>0 && mat[i][j]<=9){
                 
                    if(row[i][val]){
                        return 0;
                    }
                    row[i][val]=1;
                    
                    if(col[j][val]){
                        return 0;
                    }
                    col[j][val]=1;
                    
                    if(block[i/3][j/3][val]){
                        return 0;
                    }
                    block[i/3][j/3][val]=1;
                }
                
            }
        }
        
        
        // int hash[10],a,b;
        // memset(hash,0,sizeof(hash));
        
        // for(int i=0;i<9;i++){
        //     for(int j=0;j<9;j++){
        //         if(mat[i][j]!=0){
        //         if(hash[mat[i][j]] == 1){
        //             return 0;
        //         }
        //         else{
        //             hash[mat[i][j]] = 1;
        //         }
        //         }
        //     }
        //     memset(hash,0,sizeof(hash));
            
        // }
        // memset(hash,0,sizeof(hash));
        // for(int i=0;i<9;i++){
        //     for(int j=0;j<9;j++){
        //         if(mat[j][i]!=0){
        //         if(hash[mat[j][i]] == 1){
                    
        //             return 0;
        //         }
        //         else{
        //             hash[mat[j][i]] = 1;
        //         }
        //         }
        //     }
        //   memset(hash,0,sizeof(hash));
        // }
        
        // memset(hash,0,sizeof(hash));
        // for(int i=0;i<7;i+=3){
        //     for(int j=0;j<7;j+=3){
                
        //         for(int k=0;k<3;k++){
        //             for(int l=0;l<3;l++){
                    
        //             a = i+k;
        //             b = j+l;
        //              if(mat[a][b]!=0){
        //                 if(hash[mat[a][b]] == 1){
        //                     return 0;
        //             }
        //             else{
        //                 hash[mat[a][b]] = 1;
        //             }
        //           }
        //          }
        //         }
        //       memset(hash,0,sizeof(hash)); 
        //     }
            
        // }
        
        return 1;
    }
};
