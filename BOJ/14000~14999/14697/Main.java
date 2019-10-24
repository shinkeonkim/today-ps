import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int A = sc.nextInt();
        int B = sc.nextInt();
        int C = sc.nextInt();
        int N = sc.nextInt();

        for(int x = 0; x<=N/A; x++) {
            for(int y = 0; y<= N/B; y++) {
                for(int z = 0; z<=N/C; z++) {
                    if(x*A+y*B+z*C == N) {
                        System.out.print(1);
                        return;
                    }
                }
            }
        }
        System.out.print(0);
    }
}