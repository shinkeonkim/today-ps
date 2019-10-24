import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int T = sc.nextInt();
        for(int t = 1; t<= T; t++) {
            System.out.println("Case "+t+":");
            int A = sc.nextInt();
            for(int x = 1; x<=6; x++) {
                if(2*x<=A && A-x <=6) {
                    System.out.println("("+x+","+(A-x)+")");
                }
            }
        }
    }
}