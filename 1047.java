import java.io.IOException;
import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner input = new Scanner(System.in);
        int hi, mi, hf, mf, hd, md, mmm, mmi, mmf, r;

        hi = input.nextInt();
        mi = input.nextInt();
        hf = input.nextInt();
        mf = input.nextInt();

        if (hf > hi) {
            if (mf == mi) {
                hd = hf - hi;
                md = 0;
            } else if (mf > mi) {
                hd = hf - hi;
                md = mf - mi;
            } else {
                if (hf - hi == 1) {
                    hd = 0;
                    md = 69 - mi;
                } else {
                    hd = hf - hi - 1;
                    md = 70 - mi;
                }
            }
        } else if (hf < hi) {
            mmi = hi * 60 + mi;
            mmf = hf * 60 + mf;
            mmm = (24 * 60) - mmi + mmf;
            md = mmm % 60;
            hd = mmm / 60;
        } else {
            if (mf > mi) {
                hd = 0;
                md = mf - mi;
            } else if (mf < mi) {
                hd = 23;
                md = 60 - (mi - mf);
            } else {
                hd = 24;
                md = 0;
            }
        }

        System.out.printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hd, md);
    }
}