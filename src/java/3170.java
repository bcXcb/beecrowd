import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        int b, g, f;
        Scanner entrada = new Scanner(System.in);
        
        b = entrada.nextInt();
        g = entrada.nextInt();
        
        f = (g / 2) - b;
        
        if (f <= 0) {
            System.out.println("Amelia tem todas bolinhas!");
        } else {
            System.out.printf("Faltam %d bolinha(s)\n", f);
        }
    }
}
