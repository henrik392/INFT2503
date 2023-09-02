#include <iostream>
#include <fstream>

using namespace std;

void read_temperatures(double temperatures[], int length);

int main()
{
    const int length = 5;
    int under = 0;
    int between = 0;
    int over = 0;

    const int lower = 10;
    const int upper = 20;

    double temperatures[length];
    read_temperatures(temperatures, length);

    for (int i = 0; i < length; i++)
    {
        double temp = temperatures[i];

        if (temp < lower)
        {
            under++;
        }
        else if (temp > upper)
        {
            over++;
        }
        else
        {
            between++;
        }
    }

    cout << "Antall under " << lower << " er " << under << endl;
    cout << "Antall mellom " << lower << " og " << upper << " er " << between << endl;
    cout << "Antall over " << upper << " er " << over << endl;

    return 0;
}

void read_temperatures(double temperatures[], int length)
{
    const char filename[] = "temperatures.txt";
    ifstream file;
    file.open(filename);
    if (!file)
    {
        cout << "Could not open file " << filename << endl;
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < length; i++)
    {
        file >> temperatures[i];
    }

    file.close();
}