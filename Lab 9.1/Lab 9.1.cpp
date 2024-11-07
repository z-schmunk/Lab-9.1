#include <iostream>

using namespace std;

int main() {
    const int SIZE = 10;
    int arr[SIZE];

    srand(static_cast<unsigned int>(time(0)));

    for (int i = 0; i < SIZE; ++i) {
        arr[i] = rand() % 9000 + 1000; // Generate 4-digit random integers
    }

    for (int i = 0; i < SIZE; ++i) {
        cout << arr[i] << endl; // Print each element
    }

    return 0;
}