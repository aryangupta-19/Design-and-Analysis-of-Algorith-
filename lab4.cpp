#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& a, int s, int m, int e) {
    int i = s;
    int j = m + 1;

    vector<int> temp;

    while (i <= m && j <= e) {
        if (a[i] <= a[j]) {
            temp.push_back(a[i]);
            i++;
        } else {
            temp.push_back(a[j]);
            j++;
        }
    }

    while (i <= m) {
        temp.push_back(a[i]);
        i++;
    }

    while (j <= e) {
        temp.push_back(a[j]);
        j++;
    }

    for (int k = 0; k < temp.size(); k++) {
        a[s + k] = temp[k];
    }
}

void mergeSort(vector<int>& arr, int s, int e) {
    if (s >= e)  return;
    int m = s + (e - s) / 2;

    mergeSort(arr, s, m);
    mergeSort(arr, m + 1, e);
    
    merge(arr, s, m, e);
}

int main() {
    vector<int> a = {4, 2, 8, 12, 1};

    mergeSort(a, 0, a.size() - 1);

    for (int x : a) {
        cout << x << " ";
    }
}