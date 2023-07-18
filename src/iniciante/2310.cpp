#include <iostream>
 
int main() {
    int n;
    char nome[21];
    double ps, pb, pa;
    int s, b, a, s1, b1, a1, ts, tb, ta, ts1, tb1, ta1;
    
    ts = tb = ta = ts1 = tb1 = ta1 = 0;
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%s", nome);
        scanf("%d %d %d", &s, &b, &a);
        scanf("%d %d %d", &s1, &b1, &a1);
        
        ts += s; tb += b; ta += a;
        ts1 += s1; tb1 += b1; ta1 += a1;
    }
    
    ps = ts1 * 100 / (double) ts;
    pb = tb1 * 100 / (double) tb;
    pa = ta1 * 100 / (double) ta;
    
    printf("Pontos de Saque: %.2lf %%.\n", ps);
    printf("Pontos de Bloqueio: %.2f %%.\n", pb);
    printf("Pontos de Ataque: %.2f %%.\n", pa);
 
    return 0;
}
