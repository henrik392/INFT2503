#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<double> v = {1.1, 2.2, 3.3, 4.4, 5.5};

  cout << "v.front() = " << v.front() << endl;
  cout << "v.back() = " << v.back() << endl;

  v.emplace(v.begin() + 1, 1.5);
  cout << "v.front() = " << v.front() << endl;

  auto f = find(v.begin(), v.end(), 1.5);
  if (f != v.end()) {
    cout << "1.5 finnes i v" << endl;
  } else {
    cout << "1.5 finnes ikke i v" << endl;
  }
}