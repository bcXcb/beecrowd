import java.io.IOException;
import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) throws IOException {
        double a, b, average;
        final double PA = 3.5, PB = 7.5;
        Scanner input = new Scanner(System.in);
        
        a = input.nextDouble();
        b = input.nextDouble();
        
        average = ((a * PA) + (b * PB)) / (PA + PB);
        
        System.out.printf("MEDIA = %.5f\n", average);
    }
}
