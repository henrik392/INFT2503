#include "commodity.hpp"
#include <string>

using namespace std;

const double SALES_TAX = 0.25;

Commodity::Commodity(string name_, int id_, double price_) : name(name_), id(id_), price(price_) {}

const string &Commodity::get_name() const {
    return name;
}

int Commodity::get_id() const {
    return id;
}

double Commodity::get_price() const {
    return price;
}

double Commodity::get_price(double quantity) const {
    return price * quantity;
}

void Commodity::set_price(double price_) {
    price = price_;
}

double Commodity::get_price_with_sales_tax(double quantity) const {
    return get_price(quantity) * (1 + SALES_TAX);
}