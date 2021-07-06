import java.util.*;
// ArrayList is not synchronized while vector is.
public class Main
{
	public static void main(String[] args) {
	
        ArrayList<Integer> arrli= new ArrayList<Integer>(5);
  
        // Appending new elements at
        // the end of the list
        for (int i = 1; i <= 5; i++)
            arrli.add(i);
  
        // Printing elements
        System.out.println(arrli);
  
        // Remove element at index 3
        arrli.remove(3);
  
        // Displaying the ArrayList
        // after deletion
        System.out.println(arrli);
  
        // Printing elements one by one
        for (int i = 0; i < arrli.size(); i++)
            System.out.print(arrli.get(i) + " ");
	}
}
