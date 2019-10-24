import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int M = sc.nextInt();

        int[] ar = new int[N+1];
        for(int x = 0; x<M; x++) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            ar[a]++;
            ar[b]++;
        }
        for(int x = 1; x<=N; x++) {
            System.out.println(ar[x]);
        }
    }
}