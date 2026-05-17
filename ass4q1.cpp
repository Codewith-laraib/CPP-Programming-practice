#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int sum = 0;

    cout << "Enter 10 integers:\n";
    for(int i = 0; i < 10; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
        sum += arr[i];
    }

    float average =sum / 10;

    cout << "\n--- Array Values ---\n";
    for(int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }

    cout << "\n\nSum = " << sum<<endl;
    cout << "\nAverage = " << average << endl;

    return 0;
}
