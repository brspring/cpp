#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, q, i, j;
    
    cin >> n >> q;
    
    /*matriz com n linhas e colunas variadas*/
    vector<vector<int>> a(n);
    
    /*verifica o tamanho da linha e insere seus elementos*/
    for (int k = 0; k < n; k++) {
        int size;
        cin >> size;
        a[k].resize(size);
        for (int l = 0; l < size; l++) {
            cin >> a[k][l];
        }
    }
    
    /*faz as queries*/
    for (int m = 0; m < q; m++) {
        cin >> i >> j;
        cout << a[i][j] << endl;
    }
       
    return 0;
}