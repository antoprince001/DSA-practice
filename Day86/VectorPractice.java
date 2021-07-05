import java.util.*;
class Sortbynumber implements Comparator<Integer> {
    // Used for sorting in ascending order 
    public int compare(Integer a, Integer b)
    {
        return a.compareTo(b);
    }
}
public class Main
{
	public static void main(String[] args) {
	    
	    Vector<Integer> v=new Vector<Integer>();
	    int n=10;
		// Appending new elements at
        // the end of the vector
        for (int i = 1; i <= n; i++)
            v.add(i);
  
        // Printing elements
        System.out.println(v);
  
        // Remove element at index 3
        v.remove(3);
        
        // Add element at index 3
        v.add(3,5);
        
        //Find occurence
        System.out.println("Element 2 found at"+v.indexOf(2));
        
        // Using set() method to replace 12 with 21 
        System.out.println("The Object that is replaced is: "
                        + v.set(0, 21));
        
        // Displaying the vector
        // after deletion
        System.out.println(v);
        
        // Sorting using comparator interface implementation
        Collections.sort(v,new Sortbynumber());
        // Printing elements one by one
        for (int i = 0; i < v.size(); i++)
            System.out.print(v.get(i) + " ");
            
        
	}
}
