#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int nota_cem, nota_cinquenta, nota_vinte, nota_dez, nota_cinco, nota_dois, moeda_1, moeda_50, moeda_25, moeda_10, moeda_05, moeda_01;
    double valor;

    cin >> valor;

    int centavos = valor * 100;

    cout << "NOTAS:" << endl;
    nota_cem = centavos / 10000;
    centavos = centavos % 10000;

    nota_cinquenta = centavos / 5000;
    centavos = centavos % 5000;

    nota_vinte = centavos / 2000;
    centavos = centavos % 2000;

    nota_dez = centavos / 1000;
    centavos = centavos % 1000;

    nota_cinco = centavos / 500;
    centavos = centavos % 500;

    nota_dois = centavos / 200;
    centavos = centavos % 200;

    cout << nota_cem << " nota(s) de R$ 100.00" << endl;
    cout << nota_cinquenta << " nota(s) de R$ 50.00" << endl;
    cout << nota_vinte << " nota(s) de R$ 20.00" << endl;
    cout << nota_dez << " nota(s) de R$ 10.00" << endl;
    cout << nota_cinco << " nota(s) de R$ 5.00" << endl;
    cout << nota_dois << " nota(s) de R$ 2.00" << endl;

    cout << "MOEDAS:" << endl;

    moeda_1 = centavos / 100;
    centavos = centavos % 100;

    moeda_50 = centavos / 50;
    centavos = centavos % 50;

    moeda_25 = centavos / 25;
    centavos = centavos % 25;

    moeda_10 = centavos / 10;
    centavos = centavos % 10;

    moeda_05 = centavos / 5;
    centavos = centavos % 5;

    moeda_01 = centavos / 1;

    cout << moeda_1 << " moeda(s) de R$ 1.00" << endl;
    cout << moeda_50 << " moeda(s) de R$ 0.50" << endl;
    cout << moeda_25 << " moeda(s) de R$ 0.25" << endl;
    cout << moeda_10 << " moeda(s) de R$ 0.10" << endl;
    cout << moeda_05 << " moeda(s) de R$ 0.05" << endl;
    cout << moeda_01 << " moeda(s) de R$ 0.01" << endl;

    return 0;
}
