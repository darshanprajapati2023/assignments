#include <iostream>

template <typename T>
void swap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
void bubbleSort(T arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

template <typename T>
void displayArray(T arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    const int size = 5;


    int intArray[size] = {5, 2, 8, 1, 6};
    std::cout << "Original Integer Array: ";
    displayArray(intArray, size);

    bubbleSort(intArray, size);

    std::cout << "Sorted Integer Array: ";
    displayArray(intArray, size);


    double doubleArray[size] = {3.14, 1.23, 2.71, 0.99, 4.56};
    std::cout << "Original Double Array: ";
    displayArray(doubleArray, size);

    bubbleSort(doubleArray, size);

    std::cout << "Sorted Double Array: ";
    displayArray(doubleArray, size);

}

