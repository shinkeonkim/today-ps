import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();

        while(N > 0) {
            for(int y = 1; y<=N; y++) {
                for(int x=0; x<y; x++) {
                    System.out.print("*");
                }
                System.out.println();
            }

            N = sc.nextInt();
        }
    }
}