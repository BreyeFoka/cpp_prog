#include <iostream>
#include <limits.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = INT_MIN;
    int smallest = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    cout << "Largest element: " << largest << endl;
    cout << "Smallest element: " << smallest << endl;

    return 0;
}
