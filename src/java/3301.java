import java.io.IOException;
import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) throws IOException {
        int h, z, l;
        Scanner input = new Scanner(System.in);
        
        h = input.nextInt();
        z = input.nextInt();
        l = input.nextInt();
        
        if ((h > z && h < l) || (h < z && h > l)) {
            System.out.println("huguinho");
        }
    
        if ((z > h && z < l) || (z < h && z > l)) {
            System.out.println("zezinho");
        }
        
        if ((l > h && l < z) || (l < h && l > z)) {
            System.out.println("luisinho");
        }
    }
}
