import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        while(N>0) {
            if(N>5000000) {
                N = N*4/5;
            }
            else if(1000000 < N && N<=5000000) {
                N = N*9/10;
            }
            System.out.println(N);
            N = sc.nextInt();
        }
    }
}