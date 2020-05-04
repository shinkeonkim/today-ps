import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class java_4606 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Map<String, String> map = new HashMap<String, String>();
        map.put(" ", "%20");
        map.put("!", "%21");
        map.put("$", "%24");
        map.put("%", "%25");
        map.put("(", "%28");
        map.put(")", "%29");
        map.put("*", "%2a");
        
        String s = sc.nextLine();
        while(!s.equals("#")) {
            for(int i = 0; i<s.length(); i++) {
                if(map.containsKey(Character.toString(s.charAt(i)))) {
                    System.out.print(map.get(Character.toString(s.charAt(i))));
                }
                else {
                    System.out.print(s.charAt(i));
                }
            }
            System.out.println();
            s = sc.nextLine();
        }
        sc.close();
    }

}