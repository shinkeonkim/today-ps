import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        for(int x = 0; x < N; x++) {
            int K = sc.nextInt();

            System.out.printf("%d %d %d\n",K*(K+1)/2,K*K,K*(K+1));
        }
    }
}