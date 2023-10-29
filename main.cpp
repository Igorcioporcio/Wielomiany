#include <iostream>
#include <vector>
#include "polynomian.h"

using namespace std;

int main()
{
    vector<string> ws_1, ws_2;
    string n;
    string koniec="koniec";

    for (int i=0; i<2; i++)
    {
        cout << "Podaj wspolczynniki wielomianu " << i+1 << ". Gdy skonczysz, napisz koniec." << endl;

        while (true)
        {
            cin >> n;

            if (n==koniec)
                break;

            if (i==0)
                ws_1.push_back(n);
            else
                ws_2.push_back(n);
        }
    }

    vector<int> w = stopien(ws_1,ws_2);
    cout << "Stopien wielomianu 1 to: " << w[0] << endl;
    cout << "Stopien wielomianu 2 to: " << w[1] << endl;
    return 0;
}
