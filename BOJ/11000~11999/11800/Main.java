import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        String[] name = {"","Yakk","Doh","Seh","Ghar","Bang","Sheesh"};
        String[] sameName = {"","Habb Yakk","Dobara","Dousa","Dorgy","Dabash","Dosh"};

        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        for(int x=0; x<N; x++) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            System.out.printf("Case %d: ",x+1);
            if(a<b) {
                a = a^b;
                b = a^b;
                a = a^b;
            }

            if(a==b) {
                System.out.println(sameName[a]);
            }
            else if(a == 6 && b == 5) {
                System.out.println("Sheesh Beesh");
            }
            else {
                System.out.println(name[a]+" "+name[b]);
            }
        }
    }
}