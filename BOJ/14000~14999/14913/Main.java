import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int d = sc.nextInt();
        int k = sc.nextInt();
        int Z = k-a;
        if(Z % d == 0 && Z/d>=0) {
            System.out.print(Z/d +1);
        } else {
            System.out.print("X");
        }
    }
}