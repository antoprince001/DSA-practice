/*
3
1
1
222
222
33333
33333
*/
import java.util.*;

class Main{

  public static void main(String args[]){
  
    Scanner s = new Scanner(System.in);
    int n= s.nextInt();
    
    for(int i=0;i<=n;i++){
      for(int j=n;j>=i;j--){
        int x = i*(i-1);
        
        while(x-- != 0){
          System.out.println("%d",i);
        }
        System.out.println();
      }
    }
    
  }
}
