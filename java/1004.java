import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        int a, b, prod;
        Scanner input = new Scanner(System.in);
        
        a = input.nextInt();
        b = input.nextInt();
        
        prod = a * b;
        
        System.out.println("PROD = " + prod);
    }
}
