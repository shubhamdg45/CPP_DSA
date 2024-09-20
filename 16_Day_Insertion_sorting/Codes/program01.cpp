/*     ** Insertion sort **
 *
 *
 *     Input:{4,3,6,7,1,9}
 *
 *     Output: {1,3,4,6,7,9}
 *
 *
 */

#include<iostream>

using namespace std;


void insertionsort(int arr[],int n){

	for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

	while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] ={4, 3, 6, 7, 1,9};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionsort(arr, n);
    printArray(arr, n);

    return 0;
}
