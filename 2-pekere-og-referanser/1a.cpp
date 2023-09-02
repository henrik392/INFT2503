#include <iostream>

using namespace std;

int main()
{
    int i = 3;
    int j = 5;
    int *p = &i;
    int *q = &j;

    cout << "i = " << i << ", &i = " << &i << endl;
    cout << "j = " << j << ", &j = " << &j << endl;
    cout << "p = " << p << ", &p = " << &p << endl;
    cout << "q = " << q << ", &q = " << &q << endl;

    // Stemmer med tegningen

    return 0;
}