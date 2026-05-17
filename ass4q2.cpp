#include <iostream>
using namespace std;

int main() {
    int arr[12];

    cout << "Enter 12 integers:\n";
    for(int i = 0; i < 12; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "\nArray in Reverse Order:\n";
    for(int i = 11; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
