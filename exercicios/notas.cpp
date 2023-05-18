#include <bits/stdc++.h>
using namespace std;

int main(){
    int valor, nota_cem, nota_cinquenta, nota_vinte, nota_dez, nota_cinco, nota_dois, nota_um;
    int valor_inicial;

    cin >> valor;
    valor_inicial = valor;


    nota_cem = valor / 100;
    valor = valor % 100;

    nota_cinquenta = valor / 50;    
    valor = valor % 50;

    nota_vinte = valor / 20;
    valor = valor % 20;

    nota_dez = valor / 10;  
    valor = valor % 10;

    nota_cinco = valor / 5;
    valor = valor % 5;

    nota_dois = valor / 2;
    valor = valor % 2;

    nota_um = valor / 1;
    valor = valor % 1;

    cout << valor_inicial << endl;
    cout << nota_cem << " nota(s) de R$ 100,00" << endl;
    cout << nota_cinquenta << " nota(s) de R$ 50,00" << endl;
    cout << nota_vinte << " nota(s) de R$ 20,00" << endl;
    cout << nota_dez << " nota(s) de R$ 10,00" << endl;
    cout << nota_cinco << " nota(s) de R$ 5,00" << endl;
    cout << nota_dois << " nota(s) de R$ 2,00" << endl;
    cout << nota_um << " nota(s) de R$ 1,00" << endl;

    return 0;
}