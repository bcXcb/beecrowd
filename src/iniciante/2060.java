import java.io.IOException;
import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) throws IOException {
        int n, x;
        int multiplos[] = {0,0,0,0};
        Scanner input = new Scanner(System.in);
        
        n = input.nextInt();
        
        for (int i = 0; i < n; i++) {
            x = input.nextInt();
            if (x % 2 == 0) multiplos[0]++;
            if (x % 3 == 0) multiplos[1]++;
            if (x % 4 == 0) multiplos[2]++;
            if (x % 5 == 0) multiplos[3]++;
        }
        
        for (int i = 0; i < 4; i++) {
            System.out.printf("%d Multiplo(s) de %d\n", multiplos[i], i + 2);
        }
    }
}
