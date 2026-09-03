#include <iostream>
#include <vector>
using namespace std;

void heapify(vector<int>& arr, int n, int i) {
    int largest = i;
    int leftChild = 2 * i + 1;
    int rightChild = 2 * i + 2;

    if (leftChild < n && arr[leftChild] > arr[largest]) {
        largest = leftChild;
    }
    if (rightChild < n && arr[rightChild] > arr[largest]) {
        largest = rightChild;
    }

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(vector<int>& arr) {
    int n = arr.size();
    // int sz = n-1;

    for (int i = n / 2 - 1; i >= 0; i--) {  //build heap
        heapify(arr, n, i);
    }

    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        // sz--;
        heapify(arr, i, 0);
    }
}

int main() {
    vector<int> arr = {100, 20, 30, 15, 5, 6};

    heapSort(arr);

    for (int x : arr) {
        cout << x << " ";
    }
}