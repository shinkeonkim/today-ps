import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        while (sc.hasNextInt()) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            int c = sc.nextInt();

            if (a > b) {
                a = a ^ b; b = a ^ b; a = a ^ b;
            }
            if (b > c) {
                b = b ^ c; c = b ^ c; b = b ^ c;
            }
            if (a > b) {
                a = a ^ b; b = a ^ b; a = a ^ b;
            }

            System.out.println(b-a > c-b?b-a-1:c-b-1);
        }
    }
}