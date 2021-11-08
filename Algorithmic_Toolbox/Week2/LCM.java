import java.util.*;

public class LCM {
  private static long lcm_naive(int a, int b) {
    for (long l = 1; l <= (long) a * b; ++l)
      if (l % a == 0 && l % b == 0)
        return l;

    return (long) a * b;
  }

  private static long lcm_fast(int a, int b) {
  
    long lcm = (long)a*b;
    lcm = (long)(lcm/gcd_fast(a, b));
    return lcm;
  }

  private static long gcd_fast(long a, long b) {
    
    long temp;

    // A is to be the larger number
    if(b>a){
      temp = a;
      a = b;
      b = temp;
    }

    // Euclidean Algorithm
    while(b != 0){
      temp = a%b;
      a = b;
      b = temp;
    }

    return a;
  }

  public static void main(String args[]) {
    Scanner scanner = new Scanner(System.in);
    int a = scanner.nextInt();
    int b = scanner.nextInt();

    // System.out.println(lcm_naive(a, b));
    System.out.println(lcm_fast(a, b));

  }
}
