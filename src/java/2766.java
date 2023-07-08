import java.io.IOException;
import java.util.Scanner;
import java.util.ArrayList;
 
public class Main {
    public static void main(String[] args) throws IOException {
        String nome;
        Scanner input = new Scanner(System.in);
        ArrayList<String> lista = new ArrayList<>();
 
        for (int i = 0; i < 10; i++) {
            nome = input.next();
            lista.add(nome);
        }
        
        System.out.println(lista.get(2));
        System.out.println(lista.get(6));
        System.out.println(lista.get(8));
    }
}
