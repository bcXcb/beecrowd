import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        int a, b, c, d, dif;
        Scanner input = new Scanner(System.in);
        
        a = input.nextInt();
        b = input.nextInt();
        c = input.nextInt();
        d = input.nextInt();
        
        dif = (a * b - c * d);
        
        System.out.println("DIFERENCA = " + dif);
    }
}
