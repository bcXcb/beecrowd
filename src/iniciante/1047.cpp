#include <iostream>
 
using namespace std;
 
int main() {
    int hi; int mi; int hf; int mf; int hd; int md;
    int mmm; int mmi; int mmf; int r;
    
    cin >> hi >> mi >> hf >> mf;
    
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
    
    cout << "O JOGO DUROU " << hd << " HORA(S) E " << md << " MINUTO(S)" << endl;
 
    return 0;
}
