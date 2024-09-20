#include <iostream>

using namespace std;

void oppgave_a(double temperatures[], int length) {
    std::cout << "Skriv inn " << length << " tempraturer: " << endl;
    for (int i = 0; i < length; i++) {
        std::cout << "Tempratur nr " << i + 1 << ": ";
        double temp;
        cin >> temp;

        temperatures[i] = temp;
    }
}