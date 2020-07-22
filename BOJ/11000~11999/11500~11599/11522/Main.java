import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int P = sc.nextInt();

        for(int x = 0; x<P; x++) {
            int K = sc.nextInt();
            int N = sc.nextInt();
            int[] S = new int[3];

            S[0] = N*(N+1)/2;
            S[1] = N*N;
            S[2] = N*(N+1);

            System.out.print(K + " ");
            for(int y=0; y<3; y++) {
                System.out.print(S[y]+" ");
            }
            System.out.println();
        }
    }
}