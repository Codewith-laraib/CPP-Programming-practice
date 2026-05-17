#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;

int main() {
    srand(time(0));
    int arr[10];

    cout << "Generated Array Elements:\n";
    for(int i = 0; i < 10; i++) {
        arr[i] = rand() % 101; 
        cout << arr[i] << " ";
    }
    cout << endl;

    
    int firstMax = -1;
    int secondMax = -1;

    for(int i = 0; i < 10; i++) {
        if(arr[i] > firstMax) {
            secondMax = firstMax;
            firstMax = arr[i];
        } else if(arr[i] > secondMax && arr[i] != firstMax) {
            secondMax = arr[i];
        }
    }

    cout << "\nFirst Maximum Value: " << firstMax << endl;
    cout << "Second Maximum Value: " << secondMax << endl;

    return 0;
}
