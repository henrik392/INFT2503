#include <iostream>

using namespace std;

int main()
{
    int i = 3;
    int j = 5;
    int *p = &i;
    int *q = &j;

    *p = 7;
    cout << *p << " " << *q << endl;

    *q += 4;
    cout << *p << " " << *q << endl;

    *q = *p + 1;
    cout << *p << " " << *q << endl;

    p = q;
    cout << *p << " " << *q << endl;

    *p = 9;
    cout << *p << " " << *q << endl;

    // Utvidet eksempelet for å vise at når referansen p settes lit referansen q vil de alltid ha samme derefrenced verdi.
    // Dette er fordi de peker på samme minneadresse.

    return 0;
}