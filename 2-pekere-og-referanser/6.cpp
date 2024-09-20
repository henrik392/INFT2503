#include <iostream>

int find_sum(const int *table, int length);

int main() {
    int table[20];
    for (int i = 0; i < 20; i++) {
        table[i] = i + 1;
    }

    std::cout << "Sum av første 10 tall: " << find_sum(table, 10) << std::endl;
    std::cout << "Sum av neste 5 tall: " << find_sum(table + 10, 5) << std::endl;
    std::cout << "Sum av siste 5 tall: " << find_sum(table + sizeof(table) / 4 - 5, 5) << std::endl;

    return 0;
}

int find_sum(const int *table, int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += *(table + i);
    }
    return sum;
}