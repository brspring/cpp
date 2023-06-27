#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void generateGrayCode(int n) {
    if (n <= 0)
        return;
    
    vector<string> grayCodes;
    grayCodes.push_back("0");
    grayCodes.push_back("1");

    for (int i = 2; i < pow(2, n); i = i << 1) {
        for (int j = i - 1; j >= 0; j--)
            grayCodes.push_back(grayCodes[j]);
        
        for (int j = 0; j < i; j++)
            grayCodes[j] = "0" + grayCodes[j];
        
        for (int j = i; j < 2 * i; j++)
            grayCodes[j] = "1" + grayCodes[j];
    }

    for (const string& code : grayCodes)
        cout << code << endl;
}

int main() {
    int n = 4;
    generateGrayCode(n);

    return 0;
}
