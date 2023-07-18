import java.io.IOException;
import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) throws IOException {
        String palavra;
        Scanner input = new Scanner(System.in);
        
        palavra = input.next();
        
        if (palavra.length() >= 10) {
            System.out.println("palavrao");
        } else {
            System.out.println("palavrinha");
        }
    }
}