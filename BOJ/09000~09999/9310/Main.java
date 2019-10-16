import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] ar = new int[3];
        while(N != 0) {
            for(int x=0; x<3; x++) {
                ar[x] = sc.nextInt();
            }
            
            if(ar[1]*2 == ar[0] + ar[2]) {
                System.out.println(N*(2*ar[0] + (N-1)*(ar[1]-ar[0]))/2);
            }
            else {
                System.out.println((int)(ar[0] * (Math.pow(ar[1]/ar[0], N) -1) / (ar[1]/ar[0] -1)));
            }

            N = sc.nextInt();
        }
    }
}