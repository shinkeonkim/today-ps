import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int R =sc.nextInt();
        int C = sc.nextInt();
        int[] check = new int[55];
        int[] score = new int[55];
        String[] ar = new String[55];
        for(int i = 0; i <R; i++) {
            ar[i] = sc.next();
        }
        
        for(int k = 49; k<58; k++) {
            for(int i = 0; i <R; i++) {
                for(int j = 3; j <C; j++) {
                    if((int)ar[i].charAt(j) == k && (int)ar[i].charAt(j-1) == k && (int)ar[i].charAt(j-2) == k) {
                        check[k-48] = j;
                    }
                }
            }            
        }
        for(int x=1; x<10; x++) System.out.println(check[x]);
        

    }
} 