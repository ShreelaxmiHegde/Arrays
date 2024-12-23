#include <iostream>
#include <climits>
using namespace std;


int largestVal(int num[], int sz) {
    
    int largest = INT8_MIN;

    for(int i=0; i<5; i++) {
        largest = max(num[i], largest);
    }
    cout << "largest num = " << largest << endl;

    for(int i=0; i<5; i++) {
        if(largest == num[i]) {
            cout << "idx = " << i; 
        }
    }
}

void reverseArray(int arr[], int size) {
    int start = 0, end = size-1;

    while(start <= end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void sumAndPro(int arr[], int size) {
    int sum = 0, pro = 1;

    if(size == 0) {          // corner case
        cout << "sum: 0" << endl;
        cout << "product: 0" << endl;
        return;
    }

    for(int i=0; i<size; i++) {
        sum += arr[i];
        pro *= arr[i];
    }

    cout << "sum: " << sum << endl;
    cout << "product: " << pro << endl;
}


int main() {
    
    int arr[6] = {3, 5, 7, 8, 9, 0};
    int size = 6;

    cout << largestVal(arr, 5);
    reverseArray(arr,size);
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }

    sumAndPro(arr, 6);
    
    
    return 0;
}