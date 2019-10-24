import java.util.Scanner;

/*  똑같은 로직의 python 코드는 AC되고
    이 코드는 WA이가 떴다. 왜일까?
*/
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int h = sc.nextInt();
        int m = sc.nextInt();
        int s = sc.nextInt();
        int Mod = 60*60*24;
        int tc = sc.nextInt();
        int current = h*60*60 + m*60 + s;

        for(int x=0; x<tc; x++) {
            int T = sc.nextInt();
            if(T == 1) {
                int c = sc.nextInt();
                current  = (current + c)%Mod;
            }else if(T == 2) {
                int c = sc.nextInt();
                current = (current + -c) % Mod;
            }else if(T == 3){
                if(currnet < 0) current += Mod;
                System.out.printf("%d %d %d\n",current/3600,(current%3600)/60,current%60);
            }
        }
    }
} 