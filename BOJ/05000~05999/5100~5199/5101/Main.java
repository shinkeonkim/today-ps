import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while(true) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            int c = sc.nextInt();
            if(a==0 && b== 0 && c == 0) break;
            if(b>0 && c>=a && (c-a)%b == 0) {
                System.out.println((c-a)/b + 1);
            }
            else if (b<0 && c<=a && (a-c)%(-b) == 0){
                System.out.println((a-c)/(-b) +1);
            }
            else {
                System.out.println("X");
            }
        }
    }
}