import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        double raio, area;
        final double PI = 3.14159;
        Scanner input = new Scanner(System.in);
        
        raio = input.nextDouble();
        
        area = PI * (raio * raio);
        
        System.out.printf("A=%.4f\n", area);
    }
}