#include <iostream>
#include <utility>
using namespace std;

pair<int,int> dac(int a[], int i, int j) {

    if (i == j) return {a[i], a[i]};
    if (j == i + 1) {
        if (a[i] > a[j]) return {a[i], a[j]};   
        else return {a[j], a[i]};
    }

    int mid = (i + j) / 2;

    pair<int,int> left = dac(a, i, mid);
    pair<int,int> right = dac(a, mid + 1, j);

    int maxi = max(left.first, right.first);
    int mini = min(left.second, right.second);

    return {maxi, mini};
}

int main() {

    int a[] = {2, 23, 1, 4, 5};
    int n = sizeof(a) / sizeof(a[0]);

    pair<int, int> ans = dac(a, 0, n - 1);

    cout << "Maximum = " << ans.first << endl;
    cout << "Minimum = " << ans.second << endl;

    return 0;
}

#include<iostream>
using namespace std;

int main(){
    string name;
    cout << "Please enter your name here :";
    cin >> name;

    cout<<"Hii,"<<name<<" How are you!";
    cout<<"Om Nmao shivaye"<<endl<<'Shiv Ji sada sahaye';
}
