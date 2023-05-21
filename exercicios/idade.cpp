#include <bits/stdc++.h>
using namespace std;

int main()
{
    int valor;
    int meses = 0, dias = 0, anos = 0;

    cin >> valor;

    if (valor >= 365){
        anos = valor / 365;
        valor = valor % 365;
        meses = valor / 30;
        valor = valor % 30;
        dias = valor;
    }else{
        meses = valor / 30 ;
        dias = valor%30;
    }

    cout << anos << " ano(s)" << endl;
    cout << meses << " mes(es)" << endl;
    cout << dias << " dia(s)" << endl;
}