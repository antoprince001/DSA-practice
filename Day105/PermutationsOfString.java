import java.util.*;
public class Main
{
    public static void generatePermuations(char []words, int start,int end){
        if(start == end-1){
            System.out.println(words);
        }
        else{
            char temp;
            for(int i=start;i<end;i++){
                temp= words[start];
                words[start] = words[i];
                words[i] = temp;
                
                generatePermuations(words,start+1,end);
                
                temp= words[start];
                words[start] = words[i];
                words[i] = temp;
                
            }
        }
    }
	public static void main(String[] args) {
		System.out.println("Enter String");
		Scanner s = new Scanner(System.in);
		
		String word = s.nextLine();
		
		generatePermuations(word.toCharArray(),0,word.length());
	}
}
