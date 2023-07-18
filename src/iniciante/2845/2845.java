import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        int n, m, a;
        Scanner input = new Scanner(System.in);
        
        n = input.nextInt();
        a = input.nextInt();
        m = a;
        
        while (--n > 0) {
            a = input.nextInt();
            if (a > m) { m = a; }
        }
        
        System.out.println(m + 1);
    }
}
