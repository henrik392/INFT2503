#include "a.hpp"
#include "b.hpp"
#include <iostream>

void display_temperatures(double temperatures[], int length);

int main() {
    std::cout << "Vil du\n(1) Skrive inn temperatur\n(2) Lese inn temperatur fra fil\nSkriv 1 eller 2: ";

    int valg = -1;
    while (valg != 1 && valg != 2) {
        std::cin >> valg;
        if (valg != 1 && valg != 2) {
            std::cout << "Ugyldig valg, skriv 1 eller 2: " << std::endl;
        }
    }

    const int length = 5;
    double temperatures[length];
    if (valg == 1) {
        oppgave_a(temperatures, length);
    } else {
        oppgave_b(temperatures, length);
    }

    display_temperatures(temperatures, length);

    return 0;
}

void display_temperatures(double temperatures[], int length) {
    const int lower = 10;
    const int upper = 20;
    int under = 0, between = 0, over = 0;

    for (int i = 0; i < length; i++) {
        double temp = temperatures[i];

        if (temp < lower) {
            under++;
        } else if (temp > upper) {
            over++;
        } else {
            between++;
        }
    }

    std::cout << "Antall under " << lower << " er " << under << std::endl;
    std::cout << "Antall mellom " << lower << " og " << upper << " (inklusiv) er " << between << std::endl;
    std::cout << "Antall over " << upper << " er " << over << std::endl;
}