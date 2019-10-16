import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int Min = 10001;
        int Max = 0;
        int L = sc.nextInt();
        int D = sc.nextInt();
        int X = sc.nextInt();
        for(int x=L; x<=D; x++) {
            int K = x;
            int S = 0;
            while(K>0) {
                S+=K%10;
                K/=10;
            }
            if(S==X) {
                if(x<Min) Min = x;
                if(x>Max) Max = x;
            }
        }
        System.out.printf("%d\n%d",Min,Max);
    }
}