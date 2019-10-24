import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        int M = sc.nextInt();
        int[][] A = new int[N][M];

        for(int y = 0; y < N; y++) {
            for(int x = 0; x < M; x++) {
                A[y][x] = sc.nextInt();
            }
        }
        M = sc.nextInt();
        int K = sc.nextInt();
        int[][] B = new int[M][K];

        for(int y = 0; y< M; y++) {
            for(int x=0; x<K; x++) {
                B[y][x] = sc.nextInt();
            }
        }

        int[][] result = new int[N][K];

        for(int y = 0; y< N; y++) {
            for(int x=0; x<K; x++) {
                for(int z = 0; z<M; z++) {
                    result[y][x] += A[y][z]*B[z][x];
                }
            }
        }

        for(int y=0; y<N; y++) {
            for(int x=0; x<K; x++) {
                System.out.print(result[y][x]+" ");
            }
            System.out.println();
        }

    }
}