#include <iostream>
using namespace std;
int partition(int a[], int p, int q) {
    int pivot = a[q];
    int i = p - 1;
    
    for (int j = p; j < q; j++) {
        if (a[j] <= pivot) {
            i++;
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    
    int temp = a[i + 1];
    a[i + 1] = a[q];
    a[q] = temp;
    
    return i + 1;
}
int SelectionProcedure(int a[], int s, int e, int k) {
    if (s == e) {
        if (s == k) return a[s];
        else return -1;       
    } else {
        int m = partition(a, s, e);
        if (k == m) {
            return a[m];
        } else if (k < m) {
            return SelectionProcedure(a, s, m - 1, k);
        } else {
            return SelectionProcedure(a, m + 1, e, k);
        }
    }
}

int main() {
    int a[] = {12, 3, 5, 7, 4, 19, 26};
    int n = sizeof(a) / sizeof(a[0]);
    int k = 2; 

    cout << "Original Array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    int result = SelectionProcedure(a, 0, n - 1, k);

    if (result != -1) {
        cout << "The " << (k + 1) << "-th smallest element is: " << result << endl;
    } else {
        cout << "Index out of bounds." << endl;
    }

    return 0;
}

// quick sort 

#include <iostream>
using namespace std;

void quickSort(int a[], int p, int q) {
    if (p < q) {
        int m = partition(a, p, q);
        quickSort(a, p, m - 1);
        quickSort(a, m + 1, q);
    }
}

int main() {
    int a[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(a) / sizeof(a[0]);

    cout << "Original Array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    quickSort(a, 0, n - 1);

    cout << "Sorted Array:   ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}

// merge sort 
void merge(vector<int> arr1, vector<int> arr2){
    int i = 0;
    int j= 0;
    vector<int> temp;
    while(i < arr1.size() && j < arr2.size()){
        if(arr1[i] <= arr2[j]){
            temp[i] = arr1[i];
            i++;
        }else{
            temp[i] = arr2[j];
            j++;
        }
    }

    while(i <= arr1.size()){
        temp[i] = arr1[i];
        i++;
    }

    while(j <= arr2.size()){
        temp[i] = arr2[i];
        i++;
    }
}