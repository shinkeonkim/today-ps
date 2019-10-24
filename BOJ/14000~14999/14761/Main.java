import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int X = sc.nextInt();
        int Y= sc.nextInt();
        int N = sc.nextInt();
        for(int x=1; x<=N; x++) {
            boolean c = false;
            if(x%X == 0) {
                System.out.print("Fizz");
                c = true;
            }
            if(x%Y == 0) {
                System.out.print("Buzz");
                c = true;
            }
            if(!c) {
                System.out.print(x);
            }
            System.out.println();
        }
    }
}