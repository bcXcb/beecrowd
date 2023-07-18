import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
        String nome;
        int n, forcaAplicada;
        Scanner entrada = new Scanner(System.in);
        
        n = entrada.nextInt();
        
        for (int i = 0; i < n; i++) {
            nome = entrada.next();
            forcaAplicada = entrada.nextInt();
            
            if (nome.equals("Thor")) {
                System.out.println("Y");
            } else {
                System.out.println("N");
            }
        }
    }
}
