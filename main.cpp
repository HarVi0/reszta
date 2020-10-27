#include <iostream>

using namespace std;

int main()
{
    float nominal[9]= {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int reszta, liczba_banknotow, i=0;

    cout << "Podaj reszte: ";
    cin >> reszta;

    while (reszta > 0)
    {
        if (reszta >= nominal[i])
        {
            liczba_banknotow = reszta / nominal[i];
            reszta = reszta - (nominal[i] * liczba_banknotow);
            if(liczba_banknotow == 1)
            {
                cout << liczba_banknotow << " raz " << nominal[i] <<" zl." << endl;
            }
            else
            {
                cout << liczba_banknotow << " razy " << nominal[i] <<" zl. " << endl;
            }
        }
        i++;
    }

    return 0;
}
