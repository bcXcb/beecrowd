import java.io.IOException;
import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) throws IOException {
        int a, b, c;
        Scanner input = new Scanner(System.in);

        a = input.nextInt();
        b = input.nextInt();
        c = input.nextInt();

        if (a > b && c >= b) { System.out.println(":)"); }
        if (a < b && c <= b) { System.out.println(":("); }
        if (a < b && b < c) {
            if ((c - b) < (b - a)) { System.out.println(":("); }
            else { System.out.println(":)"); }
        }
        if (a > b && b > c) {
            if ((b - c) < (a - b)) { System.out.println(":)"); }
            else { System.out.println(":("); }
        }
        if (a == b) {
            if (b < c) { System.out.println(":)"); }
            else { System.out.println(":("); }
        }
    }
}