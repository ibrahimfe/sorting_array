# sorting_array
this is a list of sorting array algorithm that you can use
Sorting Array Algorithms in C++

Welcome to my sorting_array repository! This repository contains various implementations of sorting algorithms for arrays using the C++ programming language.
Algorithms

The following sorting algorithms are implemented in this repository:

    Bubble Sort
    Tree Sort
    Selection Sort
    Insertion Sort
    Merge Sort
    Quick Sort

Each algorithm is implemented as a standalone C++ function with the following signature:

cpp

void algorithmName(int arr[], int n);

Where arr is the array to be sorted, and n is the size of the array.
Usage

To use any of the implemented algorithms, simply include the corresponding header file in your C++ code and call the function with the array you want to sort. For example, to use the bubble sort algorithm:

cpp

#include "bubble_sort.h"

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    // print the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

Contributing

If you would like to contribute to this repository, feel free to open a pull request or submit an issue. All contributions are welcome!
