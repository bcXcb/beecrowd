import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        int n, v, a;
        boolean e = true;
        Scanner input = new Scanner(System.in);
        
        n = input.nextInt();
        a = input.nextInt();
        
        while (--n > 0) {
            v = input.nextInt();
            if (a < v) { e = false; }
        }
        
        if (e) { System.out.println("S"); }
        else { System.out.println("N"); }
    }
}