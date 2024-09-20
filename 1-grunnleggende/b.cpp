#include <fstream>
#include <iostream>

using namespace std;

void read_temperatures(double temperatures[], int length);

void oppgave_b(double temperatures[], int length) {
    read_temperatures(temperatures, length);
}

void read_temperatures(double temperatures[], int length) {
    const char filename[] = "temperatures.txt";
    ifstream file;
    file.open(filename);
    if (!file) {
        cout << "Could not open file " << filename << endl;
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < length; i++) {
        file >> temperatures[i];
    }

    file.close();
}