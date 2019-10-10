import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
        String s = bf.readLine();
        int S = 0;
        for(int x=0; x<s.length(); x++) {
            S += (int)s.charAt(x) - 48;
            S %= 3;
        }

        if(S%3 == 0) {
            System.out.println(1);
        }
        else {
            System.out.println(0);
        }
    }
}