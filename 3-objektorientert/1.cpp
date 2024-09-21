#include "1.hpp"

const double pi = 3.141592;

// ==> Implementasjon av klassen Circle

// 1: Skal ikke ha public foran
// 2: Skal initialisere radius, ikke radius_
Circle::Circle(double radius_) : radius(radius_) {
}

// Manglet const etter get_area()
int Circle::get_area() const {
    return pi * radius * radius;
}

// 1: Mangler returverdi
// 2: Mangler type for `circumference` variabel
double Circle::get_circumference() const {
    int circumference = 2.0 * pi * radius;
    return circumference;
}