//
// surface_test.cpp
//

#include <iostream>
#include <string>
#include "surface.hpp"


//
// Dette er et program som tester klassen Flate .
// Vi tester klassen ved å opprette et objekt av klassen.
// Deretter henter vi ut dataene fra objektet og skriver disse ut,
// slik at vi kan se at objektet virkelig inneholder
// de dataene vi puttet inn, og at det gjør sine beregninger riktig.
//

int main() {
    // Trinn 1: Lager et objekt av klassen.
    Surface floor("Torils golv", 4.8, 2.3);

    // Trinn 2: Henter ut data og får utført beregninger på objektet
    string name = floor.get_name();
    double width = floor.get_width();
    double length = floor.get_length();
    double area = floor.get_area();
    double circumference = floor.get_circumference();

    // Trinn 3: Skriver ut resultatene slik at de kan kontrolleres
    cout << "Data om golvet med navn: " << name << ":" << endl;
    cout << "Bredde: " << width << endl;
    cout << "Lengde: " << length << endl;
    cout << "Areal: " << area << endl;
    cout << "Omkrets: " << circumference << endl;
}