import java.io.IOException;
import java.util.Scanner;
import java.text.DecimalFormat;
 
public class Main {
    public static void main(String[] args) throws IOException {
        double av;
        double examScore;
        double sc[] = new double[4];
        final int WGHT[] = {2,3,4,1};
        DecimalFormat df = new DecimalFormat("0.0");
        Scanner input = new Scanner(System.in);
        
        sc[0] = input.nextDouble();
        sc[1] = input.nextDouble();
        sc[2] = input.nextDouble();
        sc[3] = input.nextDouble();
        
        av = ((sc[0] * WGHT[0]) + (sc[1] * WGHT[1]) + (sc[2] * WGHT[2]) + (sc[3] * WGHT[3])) / (WGHT[0] + WGHT[1] + WGHT[2] + WGHT[3]);
        
        System.out.println("Media: " + df.format(av));
        
        if (av < 5) {
            System.out.println("Aluno reprovado.");
        } else if (av < 7) {
            System.out.println("Aluno em exame.");
            examScore = input.nextDouble();
            System.out.printf("Nota do exame: %.1f\n", examScore);
            av = (av + examScore) / 2;
            
            if (av < 5) {
                System.out.println("Aluno reprovado.");
            } else {
                System.out.println("Aluno aprovado.");
                System.out.printf("Media final: %.1f\n", av);
            }
        } else {
            System.out.println("Aluno aprovado.");
        }
    }
}