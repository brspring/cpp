#include <iostream>
#include <string>
using namespace std;

int main() {
    int num_test_cases;
    cin >> num_test_cases;
    cin.ignore(); // skip the newline character after the input
    
    while (num_test_cases--) {
        string str;
        getline(cin, str);
        int cont_leds = 0;
        for (int i = 0; i < str.size(); i++) {
            if (str[i] == '1') {
                cont_leds += 2;
            } else if (str[i] == '2') {
                cont_leds += 5;
            } else if (str[i] == '3') {
                cont_leds += 5;
            } else if (str[i] == '4') {
                cont_leds += 4;
            } else if (str[i] == '5') {
                cont_leds += 5;
            } else if (str[i] == '6') {
                cont_leds += 6;
            } else if (str[i] == '7') {
                cont_leds += 3;
            } else if (str[i] == '8') {
                cont_leds += 7;
            } else if (str[i] == '9') {
                cont_leds += 6;
            } else if (str[i] == '0') {
                cont_leds += 6;
            }
        }
        cout << cont_leds << " leds" << endl;
    }
    
    return 0;
}
