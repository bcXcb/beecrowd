import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        int a = 0, b = 0, n;
        boolean i_eh_par, j_eh_par;
        Scanner input = new Scanner(System.in);
        
        n = input.nextInt();
        
        for (int i = 0; i < n; i++) {
            i_eh_par = i % 2 == 0;
        
            for (int j = 0; j < n; j++) {
                j_eh_par = j % 2 == 0;
                
                if (i_eh_par) {
                    if (j_eh_par) {
                        a++;
                    } else {
                        b++;
                    }
                } else {
                    if (j_eh_par) {
                        b++;
                    } else {
                        a++;
                    }
                }
            }
        }
    
        System.out.printf("%d casas brancas e %d casas pretas\n", a, b);
    }
}
