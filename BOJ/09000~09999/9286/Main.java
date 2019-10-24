import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();

        for (int t = 0; t < T; t++) {
            int N = sc.nextInt();
            System.out.println("Case " + (t + 1) + ":");
            
            for (int x = 0; x < N; x++) {
                int K = sc.nextInt();
                if(K<6) {
                    System.out.println(K+1);
                }
            }
        }
    }
}