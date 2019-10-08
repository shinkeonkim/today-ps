import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int Br = sc.nextInt();
        int Bc = sc.nextInt();
        int Dr = sc.nextInt();
        int Dc = sc.nextInt();
        int Jr = sc.nextInt();
        int Jc = sc.nextInt();

        int B=0,D=0;

        D = sub(Jr,Dr) + sub(Jc,Dc);

        B = sub(Jr,Br) + sub(Jc,Bc) - min(sub(Jr,Br),sub(Jc,Bc));

        if(D < B) {
            System.out.print("daisy");
        }
        else if(D > B) {
            System.out.print("bessie");
        }
        else {
            System.out.print("tie");
        }
    }

    private static int sub(int a, int b) {
        return a>b?a-b:b-a;
    }
    
    private static int min(int a,int b) {
        return a>b?b:a;
    }
}