/*João quer montar um painel de leds contendo diversos números.  Ele não possui 
muitos leds, e não tem certeza se conseguirá montar o número desejado. Considerando 
a configuração dos leds dos números abaixo, faça um algoritmo que ajude João 
a descobrir a quantidade de leds necessário para montar o valor.*/

#include <stdio.h>

int main() {
    int num_test_cases;
    scanf("%d", &num_test_cases);
    getchar(); // skip the newline character after the input
    
    while (num_test_cases--) {
        char str[101];
        fgets(str, 101, stdin);
        int cont_leds = 0;
        for (int i = 0; str[i] != '\n'; i++) {
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
        printf("%d leds\n", cont_leds);
    }
    
    return 0;
}