#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int arr[5];

    cout << "Enter 5 integers:\n";
    for(int i = 0; i < 5; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "\n" << setw(10) << "Value" << setw(10) << "Square" << setw(10) << "Cube" << endl;
    for(int i = 0; i < 5; i++) {
        int square = arr[i] * arr[i];
        int cube = arr[i] * arr[i] * arr[i];
        cout << setw(10) << arr[i] << setw(10) << square << setw(10) << cube << endl;
    }

    return 0;
}
