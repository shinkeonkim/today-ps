import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int cnt = 0;
        for(int x=1; x*x <=N; x++) {
            if(N%x == 0) {
                int y = N/x;
                if((x+y) %2==0  && (y-x)%2==0 && y>x) {
                    cnt+=1;
                }
            }
        }
        System.out.println(cnt);
    }
} 