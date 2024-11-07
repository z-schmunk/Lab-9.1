#include <iostream>

using namespace std;

int main() {
    const int SIZE = 10;
    int arr[SIZE];

    srand(static_cast<unsigned int>(time(0)));

    for (int i = 0; i < SIZE; ++i) {
        arr[i] = rand() % 9000 + 1000;
    }

    cout << "The random integers: ";
    for (int i = 0; i < SIZE; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Even indices: ";
    for (int i = 0; i < SIZE; i += 2) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Even values: ";
    for (int i = 0; i < SIZE; ++i) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    cout << "Reverse order: ";
    for (int i = 9; i >= 0; --i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}