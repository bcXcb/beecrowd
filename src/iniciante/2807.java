import java.io.IOException;
import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) throws IOException {
        int n, a, b, c;
        Scanner input = new Scanner(System.in);
        
        n = input.nextInt();
        
        for (int i = 0; i < n; i++) {
            a = 0;
            b = 1;
            c = 0;
            for (int j = i; j < n; j++) {
                a = b;
                b = c;
                c = a + b;
            }
            if (i == n - 1) {
                System.out.println(c);
            } else {
                System.out.print(c + " ");
            }
        }
    }
}
