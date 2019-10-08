import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();

        if(a == 0 && b == 0) {
            System.out.print("Not a moose");
            return;
        }

        if(a!=b) {
            System.out.printf("Odd %d",max(a,b)*2);
        }
        else {
            System.out.printf("Even %d",a*2);
        }
    }

    private static int max(int a, int b) {
        return a>b?a:b;
    }
}