import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int L = sc.nextInt();
        int D = sc.nextInt();
        int[] check = new int[2000000];
        int time = 0;
        int answer = 0;

        for(int x=0; x<N; x++) {
            for(int y=0; y<L; y++) {
                check[time]=1;
                time++;
            }
            time+=5;
        }
        while(check[answer] ==1) {
            answer+=D;
        }
        System.out.print(answer);

    }
}