#include <iostream>

using namespace std;

int main()
{
    const int length = 5;
    int under = 0;
    int between = 0;
    int over = 0;

    const int lower = 10;
    const int upper = 20;

    cout << "Skriv inn " << length << " tempraturer: " << endl;
    for (int i = 0; i < length; i++)
    {
        cout << "Tempratur nr " << i + 1 << ": ";
        double temp;
        cin >> temp;

        if (temp < lower)
        {
            under++;
        }
        else if (temp > upper)
        {
            over++;
        }
        else
        {
            between++;
        }
    }

    cout << "Antall under " << lower << " er " << under << endl;
    cout << "Antall mellom " << lower << " og " << upper << " er " << between << endl;
    cout << "Antall over " << upper << " er " << over << endl;

    return 0;
}