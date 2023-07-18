import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        int n;
        String nome;
        double ps, pb, pa;
        int s, b, a, s1, b1, a1, ts, tb, ta, ts1, tb1, ta1;
        Scanner input = new Scanner(System.in);
        
        ts = tb = ta = ts1 = tb1 = ta1 = 0;
        
        n = input.nextInt();
        
        for (int i = 0; i < n; i++) {
            nome = input.next();
            
            s = input.nextInt();
            b = input.nextInt();
            a = input.nextInt();
            
            s1 = input.nextInt();
            b1 = input.nextInt();
            a1 = input.nextInt();
            
            ts += s;
            tb += b;
            ta += a;
            
            ts1 += s1;
            tb1 += b1;
            ta1 += a1;
        }
        
        ps = ts1 * 100 / (double) ts;
        pb = tb1 * 100 / (double) tb;
        pa = ta1 * 100 / (double) ta;
        
        System.out.printf("Pontos de Saque: %.2f %%.\n", ps);
        System.out.printf("Pontos de Bloqueio: %.2f %%.\n", pb);
        System.out.printf("Pontos de Ataque: %.2f %%.\n", pa);
    }
}
