import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int Case = 1;
        int N = sc.nextInt();
        while(N!=0) {
            int N1 = 3*N;
            int N2 = 0;
            if(N1%2 ==0) {
                N2 =N1/2;
                System.out.printf("%d. even ", Case);
            } else {
                N2 =(N1+1)/2;
                System.out.printf("%d. odd ", Case);
            }
            int N4 = N2/3;
            System.out.println(N4);
            N = sc.nextInt();
            Case++;
        }
    }
}