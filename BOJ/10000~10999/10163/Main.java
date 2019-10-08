import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[][] ar = new int[110][110];
        int[] cnt = new int[110];

        int N = sc.nextInt();
        for(int i=1; i<=N; i++) {
            int sx = sc.nextInt();
            int sy = sc.nextInt();
            int X = sc.nextInt();
            int Y = sc.nextInt();
            for(int y=sy; y<sy+Y; y++) {
                for(int x=sx; x<sx+X; x++) {
                    if(ar[y][x] >0) {
                        cnt[ar[y][x]]--;
                    }
                    ar[y][x] = i;
                    cnt[ar[y][x]]++;
                }
            }
        }

        for(int i = 1; i<=N; i++) {
            System.out.println(cnt[i]);
        }


    }
}