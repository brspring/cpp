#include <iostream>
using namespace std;

int main()
{
    int num1, num2, numeroDeEntradas;
    cin >> numeroDeEntradas;

    cin >> num1;
    cin >> num2;
    if(num1 == num2)
        cout <<"PARCEIROS"<<endl;
    else
        cout <<"NAO PARCEIROS"<<endl;
    return 0;
}