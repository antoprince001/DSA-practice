import java.util.*;
public class Main
{
    public static int palindromeCounter(String s){
        char []word = s.toLowerCase().toCharArray();
        int sum = 0,flag=0;
        HashMap<Character,Integer> count = new HashMap<>();
        
        for(int i=0;i<s.length();i++){
              count.put(word[i], count.containsKey(word[i]) ? count.get(word[i]) + 1 : 1);
        }
        for (Map.Entry<Character, Integer> e : count.entrySet()){
          if(e.getValue()%2 == 1){
              sum += (e.getValue()-1);
              flag = 1;
          }else{
              sum += (e.getValue());
          }
        }
        return sum+flag;
        
    }
	public static void main(String[] args) {
		
		Scanner s= new Scanner(System.in);
		String str = s.nextLine();
		
		System.out.println("Max Palindrome Len"+palindromeCounter(str));
		
	}
}
