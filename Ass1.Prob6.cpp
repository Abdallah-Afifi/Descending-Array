

#include <iostream>
using namespace std;

bool descendOrder(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n; 
    cout << "Enter the size of the array: ";
    cin >> n;

    int* arr = new int(n);
    cout << "Enter the array elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> *arr;
        arr++;
    }
    arr = arr - n;

    if (descendOrder(arr, n)) {
        cout << "This array is descending";
    }
    else
        cout << "This array is not descending";

    return 0;
}

