import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        
        while(!(a == 0 && b == 0 && c == 0)) {
            if(a==0) {
                a = c/b;
            }
            if(b==0) {
                b=c/a;
            }
            if(c==0) {
                c=a*b;
            }
            
            System.out.println(a+" "+b+" "+c);
            a = sc.nextInt();
            b = sc.nextInt();
            c = sc.nextInt();
        
        }
    }
}