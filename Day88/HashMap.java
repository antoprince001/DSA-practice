import java.util.*;
public class Main
{
	public static void main(String[] args) {
	
       HashMap<String, Integer> map = new HashMap<>();
  
        // Add elements to the map
        map.put("a", 10);
        map.put("b", 30);
        map.put("c", 20);
  
        // Print size and content
        System.out.println("Size of map is:- "
                           + map.size());
        System.out.println(map);
  
        // Check if a key is present and if
        // present, print value
        if (map.containsKey("a")) {
            Integer a = map.get("a");
            System.out.println("value for key"
                               + " \"a\" is:- " + a);
        }
        
         for (Map.Entry<String, Integer> e : map.entrySet())
            System.out.println("Key: " + e.getKey()
                               + " Value: " + e.getValue());
	}
}
