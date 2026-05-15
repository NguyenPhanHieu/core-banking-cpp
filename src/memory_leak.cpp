#include <iostream>

void leakMemory() {
    int* data = new int[100];

    data[0] = 10;

    std::cout << data[0] << std::endl;
    delete[] data;
    // memory leak
}

int main() {
    leakMemory();

    return 0;
}
