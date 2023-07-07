import java.io.IOException;
import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) throws IOException {
        int e, f, c;
        int posse, comprou, sobrou, tomou;
        Scanner input = new Scanner(System.in);
        
        e = input.nextInt();
        f = input.nextInt();
        c = input.nextInt();
        
        posse = e + f;
        comprou = posse / c;
        sobrou = posse - (comprou * c);
        tomou = comprou;
        
        while (posse >= c) {
            posse = comprou + sobrou;
            comprou = posse / c;
            sobrou = posse - (comprou * c);
            tomou += comprou;
        }
        
        System.out.println(tomou);
    }
}
