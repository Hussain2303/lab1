#include <iostream>
using namespace std;
template <typename T>
void selectionSort(T arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i; 

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}
template <typename T>
void printArray(T arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int intArray[] = { 64, 25, 12, 22, 11 };    
    
    int n = sizeof(intArray) / sizeof(intArray[0]); 

    cout << "Unsorted integer array: ";
    printArray(intArray, n);

    selectionSort(intArray, n); 

    cout << "Sorted integer array: ";
    printArray(intArray, n); 

    float floatArray[] = { 64.5, 25.1, 12.0, 22.8, 11.3 };
    int m = sizeof(floatArray) / sizeof(floatArray[0]); 

    cout << "Unsorted float array: ";
    printArray(floatArray, m);

    selectionSort(floatArray, m); 

    cout << "Sorted float array: ";
    printArray(floatArray, m); 

    return 0;
}
