#include <iostream>

int main() {
    int a = 5;
    int &b = a; // b må referere til noe ved deklarering
    int *c;
    c = &b;
    a = b + *c; // Kan ikke addere minneadresser (bare subtrahere)
    b = 2;      // Kan ikke tilegne minneadressen en ny verdi

    return 0;
}