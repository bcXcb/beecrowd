import java.io.IOException;
import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner input = new Scanner(System.in);
        int horaInicial, minutoInicial, horaFinal, minutoFinal, horaDuracao, minutoDuracao;

        /* x==================================x
          |          não confundir           |
          x==================================x
          | minutosInicial != minutoInicial  |
          | minutosFinal   != minutoFinal    |
          x==================================x */

        horaInicial = input.nextInt();
        minutoInicial = input.nextInt();
        horaFinal = input.nextInt();
        minutoFinal = input.nextInt();

        if (horaFinal > horaInicial) {
            if (minutoFinal == minutoInicial) {
                horaDuracao = horaFinal - horaInicial;
                minutoDuracao = 0;
            } else if (minutoFinal > minutoInicial) {
                horaDuracao = horaFinal - horaInicial;
                minutoDuracao = minutoFinal - minutoInicial;
            } else {
                if (horaFinal - horaInicial == 1) {
                    horaDuracao = 0;
                    minutoDuracao = 69 - minutoInicial;
                } else {
                    horaDuracao = horaFinal - horaInicial - 1;
                    minutoDuracao = 70 - minutoInicial;
                }
            }
        } else if (horaFinal < horaInicial) {
            int minutosInicial, minutosFinal, minutosDuracaoTotal;
            
            minutosInicial = horaInicial * 60 + minutoInicial;
            minutosFinal = horaFinal * 60 + minutoFinal;
            minutosDuracaoTotal = (24 * 60) - minutosInicial + minutosFinal;
            minutoDuracao = minutosDuracaoTotal % 60;
            horaDuracao = minutosDuracaoTotal / 60;
        } else {
            if (minutoFinal > minutoInicial) {
                horaDuracao = 0;
                minutoDuracao = minutoFinal - minutoInicial;
            } else if (minutoFinal < minutoInicial) {
                horaDuracao = 23;
                minutoDuracao = 60 - (minutoInicial - minutoFinal);
            } else {
                horaDuracao = 24;
                minutoDuracao = 0;
            }
        }

        System.out.printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horaDuracao, minutoDuracao);
    }
}