import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int K = N/2;
        System.out.print((K+1)*(N-K+1));
    }
}