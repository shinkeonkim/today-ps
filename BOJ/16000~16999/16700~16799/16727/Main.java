import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[][] ar= new int[2][2];
        int[] cnt = new int[2];
        for(int y=0; y<2; y++) {
            for(int x=0; x<2; x++) {
                ar[y][x] = sc.nextInt();
            }
        }
        if(ar[0][0] + ar[1][1] > ar[0][1] + ar[1][0]) {
            first();
        }
        else if(ar[0][0] + ar[1][1] < ar[0][1] + ar[1][0]) {
            second();
        }
        else {
            if(ar[0][1] < ar[1][1]) {
                first();
            }
            else if(ar[0][1] > ar[1][1]) {
                second();
            }
            else tie();
        }
    }

    private static void first() {
        System.out.println("Persepolis");
    }
    
    
    private static void second() {
        System.out.println("Esteghlal");
    }
    
    private static void tie() {
        System.out.println("Penalty");
    }
}