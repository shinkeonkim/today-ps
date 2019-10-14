import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int m = sc.nextInt();
        for(int x = 1; x <= m+1; x++) {
            if(a*x % m == 1) {
                System.out.print(x);
                return;
            }
        }
    }
}