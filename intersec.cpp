#include <iostream>
#include <climits>
using namespace std;

void intersec(int arr1[],int size1, int arr2[], int size2) {
    for(int i=0; i<size1; i++) {

        for(int j=0; j<size2; j++) {
            if(arr1[i] != arr2[j]) {
                j++;
            } else {
                cout << arr1[i];
            }
        }
    } 
}

int main() {
    int arr1[6] = {1, 81, 50, 5, 3, 12};
    int arr2[6] = {3, 5, 7, 8, 9, 0};
    int size2 = sizeof(arr1)/sizeof(int);
    int size1 = sizeof(arr2)/sizeof(int);
    
    intersec(arr1, size1, arr2, size2);
    // for(int i=0; i<size1; i++) {
    //     cout << arr1[i] << " ";
    // }

    
    return 0;
}
