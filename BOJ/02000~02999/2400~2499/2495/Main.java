import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] ar = {"","",""};
        for(int x = 0; x<3; x++) {
            ar[x] = sc.next();
        }
        for(int x = 0; x<3; x++) {
            int cnt = 1;
            int Max = 1;
            for(int y = 1; y<ar[x].length(); y++) {
                if(ar[x].charAt(y-1) == ar[x].charAt(y)) {
                    cnt++;
                    if(Max < cnt) {
                        Max = cnt;
                    }
                }
                else {
                    cnt=1;
                }
            }
            System.out.println(Max);
        }

    }
}