import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int k = sc.nextInt();
        int S = N;
        while(k-- > 0) {
            N*=10;
            S+=N;
        }
        System.out.print(S);

    }
}