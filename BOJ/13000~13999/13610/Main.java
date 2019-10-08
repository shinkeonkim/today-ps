import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();
        int b = sc.nextInt();

        int Sa = a;
        int Sb = 0;
        int cnt = 1;
        do {
            Sa += a;
            Sb += b;
            cnt++;
        } while(Sa > Sb);
        System.out.print(cnt);
    }
}