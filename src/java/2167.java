import java.io.IOException;
import java.util.Scanner;
import java.util.ArrayList;
 
public class Main {
    public static void main(String[] args) throws IOException {
        int n, r, a, j = 0;
        ArrayList<Integer> rr = new ArrayList<>();
        Scanner input = new Scanner(System.in);
        
        n = input.nextInt();
        
        for (int i = 0; i < n; i++) {
            r = input.nextInt();
            rr.add(r);
        }
        
        for (int i = 1; i < n; i++) {
            if (rr.get(i) < rr.get(i - 1)) {
                j = i + 1;
                break;
            }
        }
        
        System.out.println(j);
    }
}
