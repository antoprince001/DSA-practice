import java.util.*;

public class GCD {
  private static int gcd_naive(int a, int b) {
    int current_gcd = 1;
    for(int d = 2; d <= a && d <= b; ++d) {
      if (a % d == 0 && b % d == 0) {
        if (d > current_gcd) {
          current_gcd = d;
        }
      }
    }

    return current_gcd;
  }

  private static int gcd_fast(int a, int b) {
    
    int temp;

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

    // System.out.println(gcd_naive(a, b));
    System.out.println(gcd_fast(a, b));

  }
}
