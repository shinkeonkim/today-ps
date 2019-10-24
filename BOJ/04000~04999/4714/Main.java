import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double k;
        k = sc.nextDouble();
        while(k>=0.0) {
            System.out.printf("Objects weighing %.2f on Earth will weigh %.2f on the moon.\n",k,k*0.167);
            k = sc.nextDouble();
        }
    }
}