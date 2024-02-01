#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    int i, key, j;

    for (i = 1; i < n; i++) {
            key = arr[i];
            j = i -1;

            while (j >=0 && arr[j] > key) {
                arr[j+1] = arr[j];
                j = j-1;
            }
            arr[j+1] = key;
    }
}

void printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int arr[] = {7, 4, 6, 5};
    int N = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, N);
    printArray(arr, N);

}