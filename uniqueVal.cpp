#include <iostream>
#include <climits>
using namespace std;


void unique(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        bool isDuplicate = false;
        
        // Check if arr[i] is a duplicate by comparing with subsequent elements
        for (int j=0; j<size; j++) {
            // Skip comparing arr[i] with itself
            if (i != j && arr[i] == arr[j]) {
                isDuplicate = true;
                break;
            }
        }
        
        // If it's not a duplicate, print it
        if (!isDuplicate) {
            cout << arr[i] << " ";
        }
    }
}

void uniqueNums(int arr[], int size) {
    for(int i=0; i<size; i++) {
        bool isDuplicate = false;
        // Check if the current element is a duplicate
        for(int j=0; j<i; j++) {
            if(arr[i] == arr[j]) {
                isDuplicate = true;
                break;
            }
        }
        // If it's not a duplicate, print it
        if(!isDuplicate) {
            cout << arr[i] << " ";
        }
    }
}

int main() {
    int arr[6] = {1, 1, 500, 500, 3, 12};
    int size = sizeof(arr)/sizeof(int);
    
    uniqueNums(arr, size);
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}