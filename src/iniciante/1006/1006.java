import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        double a, b, c, average;
        final int PA = 2, PB = 3, PC = 5;
        Scanner input = new Scanner(System.in);
        
        a = input.nextDouble();
        b = input.nextDouble();
        c = input.nextDouble();
        
        average = ((a * PA) + (b * PB) + (c * PC)) / (PA + PB + PC);
        
        System.out.printf("MEDIA = %.1f\n", average);
    }
}
