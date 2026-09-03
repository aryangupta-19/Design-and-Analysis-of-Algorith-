// programm 1 --> factorial

#include<stdio.h>

int f(int n){
    if(n <= 1) return 1;
    return n * f(n-1);
}

int main(){
    int n ;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    if(n < 0) printf("Factorial doesnot exists for negative number.");

    printf("Factorial of given  number is : ");
    // int fact = f(n);

    // withour recurssion 
    int fact = 1;
    for(int i = 1; i<=n; i++){
        fact *= i;
    }

    printf("%d", fact);
}

// Linear Search

#include<stdio.h>

int f(int n){
    if(n <= 1) return 1;
    return n * f(n-1);
}

int main(){
    int n, k ;
    printf("Enter the value of k (Searching value) : ");
    scanf("%d", &k);

    printf("Enter the value of n (Size of array) : ");
    scanf("%d", &n);
   
   int arr[n];  
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Printing the array
    printf("Array Elements : ");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
    }

    printf("\n");

    for(int i = 0; i<n; i++){
        if(arr[i] == k){
            printf("Yes %d Exists in array at idx : %d",k, i);
        }
    }
    
    printf("No %d Doesnot exists in array ", k);
}

#include <stdio.h>

int linearSearch(int arr[], int n, int key, int index) {

    if (index == n) return -1;
    if (arr[index] == key)  return index; 

    return linearSearch(arr, n, key, index + 1);
}

int main() {
    int n, key;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    int result = linearSearch(arr, n, key, 0);

    if (result == -1)
        printf("Element not found\n");
    else
        printf("Element found at index %d\n", result);

    return 0;
}


// Binary Search 
#include <stdio.h>

int binarySearch(int arr[], int s, int e, int key) {
    if (e > s) return -1;
    int m = s + (e - s) / 2;

    if (arr[m] == key)    return m;

    if (key < arr[m]) return binarySearch(arr, s, m - 1, key);

    return binarySearch(arr, m + 1, e, key);
}

int main() {
    int n, key;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter sorted array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    int result = binarySearch(arr, 0, n - 1, key);

    if (result == -1)
        printf("Element not found\n");
    else
        printf("Element found at index %d\n", result);

    return 0;
}


#include <stdio.h>
#include <stdbool.h>
int main() {
    int n, key;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter sorted array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    // int result = binarySearch(arr, 0, n - 1, key);

    int s = 0 , e = n-1;
    bool flag = false;
    while(s <= e){
        int m = s + (e - s)/2;

        if(arr[m] == key){
            printf("Element found at index %d\n", m);
            flag = true;
            break;
        }
        else if(arr[m] > key) e = m-1;
        else s = m+1;
    }

    if(!flag) printf("Element not found\n");
    return 0;
}
















































// pow(a,b)
// fibonacci series 
// gcd 
// factorial -> call by reference 


#include<stdio.h>
int pow(int a , int b){
    if(b == 0) return 1;
    if(a == 0) return 0;

    return a * pow(a, b-1);
}

int main(){
    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &a);
}