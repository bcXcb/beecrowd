import java.io.IOException;
import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) throws IOException {
        int n, id, total, l, m;
        Scanner input = new Scanner(System.in);
        
        while (input.hasNext()) {
            n = input.nextInt();
            id = input.nextInt();
            total = 0;
            
            for (int i = 0; i < n; i++) {
                l = input.nextInt();
                m = input.nextInt();
                
                if (l == id && m == 0) {
                    total++;
                }
            }
            
            System.out.println(total);
        }
        
        input.close();
    }
}
