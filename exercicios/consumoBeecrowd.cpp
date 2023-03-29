#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int distancia;
    float consumo, consumoMedio;
    cin >> distancia >> consumo;
    consumoMedio = distancia / consumo;
    cout << fixed << setprecision(3) << consumoMedio << " km/l" << endl;
    return 0;
}
