import java.util.Scanner;

public class java_1592 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int[] ar = new int[1100];
        int N = sc.nextInt();
        int M = sc.nextInt();
        int L = sc.nextInt();
        int ans  = 0;
        
        int current = 0;
        ar[0] = 1;

        while (true) {
            if (ar[current] >= M)
                break;
            ans++;
            if (ar[current] % 2 == 1) {
                current = (current +L)%N;  
            }
            else {
                current = (current -L +N)%N; 
            }
            ar[current]++;
        }
        
        System.out.println(ans);
        sc.close();
    }
}