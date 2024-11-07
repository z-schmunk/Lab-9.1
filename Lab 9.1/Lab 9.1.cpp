#include <iostream>

using namespace std;

int main() {
    const int SIZE = 10;
    int arr[SIZE];

    srand(static_cast<unsigned int>(time(0)));

    for (int i = 0; i < SIZE; ++i) {
        arr[i] = rand() % 9000 + 1000;
    }

    cout << "The random integers:";
    for (int i = 0; i < SIZE; ++i) {
        cout << arr[i] << endl;
    }
    cout << endl;

    cout << "Elements at even indices:\n";
    for (int i = 0; i < 10; i += 2) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}