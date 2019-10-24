import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        sc.nextLine();
        for(int t = 0; t< N; t++) {
            String s = sc.nextLine();
            String[] ar = s.split(" ");
            double S = Double.parseDouble(ar[0]);
            for(int k = 1; k<ar.length; k++) {
                if(ar[k].equals("@")) {
                    S*=3;
                }
                if(ar[k].equals("%")) {
                    S+=5;
                }
                if(ar[k].equals("#")) {
                    S-=7;
                }
            }
            System.out.printf("%.2f\n",S);
        }  
    }
}