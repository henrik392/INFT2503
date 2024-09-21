#pragma once
#include <string>

using namespace std;

class Commodity {
  private:
    string name;
    int id;
    double price;

  public:
    Commodity(string name_, int id_, double price_);
    const string &get_name() const;
    int get_id() const;
    double get_price() const;
    double get_price(double quantity) const;
    void set_price(double price_);
    double get_price_with_sales_tax(double quantitiy) const;
};