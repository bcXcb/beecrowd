#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    double av;
    double sc[4];
    double examScore;
    const int WGHT[] = {2, 3, 4, 1};
 
    cin >> sc[0] >> sc[1] >> sc[2] >> sc[3];
    
    av = ((sc[0] * WGHT[0]) + (sc[1] * WGHT[1]) +
    (sc[2] * WGHT[2]) + (sc[3] * WGHT[3])) /
    (WGHT[0] + WGHT[1] + WGHT[2] + WGHT[3]);
    
    cout << fixed << setprecision(1);
    cout << "Media: " << av << endl;
    
    if (av < 5) {
        cout << "Aluno reprovado." << endl;
    } else if (av < 7) {
        cout << "Aluno em exame." << endl;
        cin >> examScore;
        cout << "Nota do exame: " << examScore << endl;
        av = (av + examScore) / 2;
        
        if (av < 5) {
            cout << "Aluno reprovado." << endl;
        } else {
            cout << "Aluno aprovado." << endl;
            cout << "Media final: " << av << endl;
        }
    } else {
        cout << "Aluno aprovado." << endl;
    }
 
    return 0;
}