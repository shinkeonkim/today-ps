import java.io.*;
import java.util.Scanner;
import java.util.StringTokenizer;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(bf.readLine());
        int[][] ar = new int[1100][1100];

        int N = Integer.parseInt(st.nextToken());
        int a = Integer.parseInt(st.nextToken());
        int b = Integer.parseInt(st.nextToken());
        
        
        int cnt = 0;
        a--;
        b--;
        for(int y = 0; y<N; y++) {
            st = new StringTokenizer(bf.readLine());
            for(int x=0; x<N; x++) {
                ar[y][x] = Integer.parseInt(st.nextToken());
            }
        }

        for(int y = 0; y<N; y++) {
            if(ar[y][b] > ar[a][b]) cnt++;
        }
        for(int x=0; x<N; x++) {
            if(ar[a][x] > ar[a][b]) cnt++;
        }
        if(cnt == 0) {
            System.out.print("HAPPY");
        } else {
            System.out.print("ANGRY");
        }
    }
}