import java.util.Scanner;

public class java_1001 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        System.out.println(a-b);

        scanner.close();
    }
}