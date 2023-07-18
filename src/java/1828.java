import java.io.IOException;
import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) throws IOException {
        int t;
        String s, r;
        Boolean sv[] = new Boolean[5];
        Boolean rv[] = new Boolean[5];
        Scanner input = new Scanner(System.in);
        
        t = input.nextInt();
        
        for (int i = 0; i < t; i++) {
            s = input.next();
            r = input.next();
            
            // Sheldon victory
            sv[0] = s.equals("pedra") && (r.equals("tesoura") || r.equals("lagarto"));
            sv[1] = s.equals("papel") && (r.equals("pedra") || r.equals("Spock"));
            sv[2] = s.equals("tesoura") && (r.equals("papel") || r.equals("lagarto"));
            sv[3] = s.equals("lagarto") && (r.equals("papel") || r.equals("Spock"));
            sv[4] = s.equals("Spock") && (r.equals("tesoura") || r.equals("pedra"));
            // Raj victory
            rv[0] = r.equals("pedra") && (s.equals("tesoura") || s.equals("lagarto"));
            rv[1] = r.equals("papel") && (s.equals("pedra") || s.equals("Spock"));
            rv[2] = r.equals("tesoura") && (s.equals("papel") || s.equals("lagarto"));
            rv[3] = r.equals("lagarto") && (s.equals("papel") || s.equals("Spock"));
            rv[4] = r.equals("Spock") && (s.equals("tesoura") || s.equals("pedra"));
            
            if (sv[0] || sv[1] || sv[2] || sv[3] || sv[4]) {
                System.out.printf("Caso #%d: Bazinga!\n", i + 1);
            } else if (rv[0] || rv[1] || rv[2] || rv[3] || rv[4]) {
                System.out.printf("Caso #%d: Raj trapaceou!\n", i + 1);
            } else {
                System.out.printf("Caso #%d: De novo!\n", i + 1);
            }
        }
    }
}