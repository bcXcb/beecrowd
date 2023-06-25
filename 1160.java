import java.io.IOException;
import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) throws IOException {
        double g1, g2;
        int t, pa, pb, years;
        Scanner input = new Scanner(System.in);

        t = input.nextInt();

        for (int i = 0; i < t; i++) {
            years = 0;
            pa = input.nextInt();
            pb = input.nextInt();
            g1 = input.nextDouble();
            g2 = input.nextDouble();
            
            g1 /= 100;
            g2 /= 100;
            
            while (true) {
                pa += (int) (g1 * pa);
                pb += (int) (g2 * pb);
                years++;
                
                if (years > 100 || pa > pb) {
                    break;
                }
            }
            
            if (years > 100) {
                System.out.println("Mais de 1 seculo.");
            } else {
                System.out.println(years + " anos.");
            }
        }
    }
}