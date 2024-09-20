#include "surface.hpp"
#include <string>

using namespace std;

// ==> Her kommer implementasjonen av klassen
Surface::Surface(const string &name, double length, double width)
    : name(name), length(length), width(width) {}

const string &Surface::get_name() const {
    return name;
}

double Surface::get_length() const {
    return length;
}

double Surface::get_width() const {
    return width;
}

double Surface::get_area() const {
    return width * length;
}

double Surface::get_circumference() const {
    return 2 * (length + width);
}