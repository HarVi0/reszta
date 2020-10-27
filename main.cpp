#include <iostream>

using namespace std;

int main()
{
    float nominal[15]= {50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    float  reszta;
    int liczba_banknotow, i=0;

    cout << "Podaj reszte: ";
    cin >> reszta;
    reszta = reszta * 100;

    while (reszta>0)
    {
        if (reszta >= nominal[i])
        {
            liczba_banknotow=reszta / nominal[i];
            reszta=reszta-(nominal[i]*liczba_banknotow);
            if(liczba_banknotow==1)
            {

                cout << liczba_banknotow << " raz " << nominal[i]/100 <<" zl." << endl;
            }
            else
            {
                cout << liczba_banknotow << " razy " << nominal[i]/100 <<" zl. " << endl;
            }
        }
        i++;
    }

    return 0;
}

