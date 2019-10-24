import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String s = sc.next();
        
        for(int x=0; x<s.length(); x++) {
            System.out.print(s.charAt(x));
            if(x!= s.length()-1 && (s.length()-x-1)%3 == 0) {
                System.out.print(",");
            }
        }
    }
}