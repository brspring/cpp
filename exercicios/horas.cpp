#include <bits/stdc++.h>
using namespace std;

int main()
{
    int value;
    int seg = 0, min = 0, hr = 0;

    cin >> value;
    if (value > 3599)
    {
        hr = value / 3600;
        value = value%3600; 
        
        min = value/60;
        value = value % 60;

        seg = value;


    }
    else if (value < 60)
    {
        seg = value;
    }else if (value > 60 && value < 3600){
        min = value / 60;
        value = value % 60;

        seg = value;
    }

    cout << hr << ":" << min << ":" << seg << endl;

    return 0;
}