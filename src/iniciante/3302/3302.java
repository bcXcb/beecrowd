import java.io.IOException;
import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) throws IOException {
        int n, a;
        Scanner input = new Scanner(System.in);
        
        n = input.nextInt();
        
        int vet[] = new int[n];
        
        for (int i = 0; i < n; i++) {
            a = input.nextInt();
            vet[i] = a;
        }
        
        for (int i = 0; i < n; i++) {
            System.out.printf("resposta %d: %d\n", i + 1, vet[i]);
        }
    }
}
