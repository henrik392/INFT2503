#pragma once

class Circle {
  public:
    Circle(double radius_); // Mangler stor C
    int get_area() const;
    double get_circumference() const;

  private: // mangler `:` etter private
    double radius;
}; // mangler semikolon