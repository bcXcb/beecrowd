import java.io.IOException;
import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) throws IOException {
        int t;
        String vilao;
        Scanner input = new Scanner(System.in);
        
        t = input.nextInt();
        
        for (int i = 0; i < t; i++) {
            vilao = input.next();
            System.out.println('Y');
        }
    }
}
