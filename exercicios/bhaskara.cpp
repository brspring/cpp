#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    double A, B, C, x1, x2;
    
    cin >> A >> B >> C;
/*     cin >> B; 
    cin >> C; */
    
    double discriminant = (B * B) - (4 * A * C);
    double test = (2 * A);
    
    if (discriminant >= 0 && test > 0) {
        x1 = (-B + sqrt(discriminant)) / test;
        x2 = (-B - sqrt(discriminant)) / test;
        
        cout << fixed << setprecision(5);
        cout << "R1 = " << x1 << endl;
        cout << "R2 = " << x2 << endl;
    } else {
        cout << "Impossivel calcular" << endl;
    }

    return 0;
}