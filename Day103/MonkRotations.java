/*
Monk and Rotation

Monk loves to preform different operations on arrays, and so being the principal of Hackerearth School, he assigned a task to his new student Mishki. Mishki will be provided with an integer array A of size N and an integer K , where she needs to rotate the array in the right direction by K steps and then print the resultant array. As she is new to the school, please help her to complete the task.

Input:
The first line will consists of one integer T denoting the number of test cases.
For each test case:
1) The first line consists of two integers N and K, N being the number of elements in the array and K denotes the number of steps of rotation.
2) The next line consists of N space separated integers , denoting the elements of the array A.
*/
import java.util.*;


// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail

class TestClass {
    public static void main(String args[] ) throws Exception {
        

        //Scanner
        Scanner s = new Scanner(System.in);
        int T = s.nextInt();     // Reading input from STDIN

        //System.out.println("Hi, " + name + "."); // Writing output to STDOUT
        int N,K;
        long temp;
        while(T-- > 0){
            N= s.nextInt();
            K= s.nextInt();
            
            long arr[] = new long[N];
            for(int i=0;i<N;i++){
                arr[i]=s.nextLong();
            }
            // for(int i=0;i<K;i++){
            //     temp = arr[N-1];
            //     for(int j=N-2;j>=0;j--){
            //         arr[j+1] = arr[j];
            //     }
            //     arr[0] = temp;
            // }

            for(int i=N-(K%N);i<N;i++){
                System.out.print(arr[i]+" ");
            }
            for(int i=0;i<N-(K%N);i++){
                System.out.print(arr[i]+" ");
            }
            System.out.println("");
        }


    }
}
