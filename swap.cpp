#include <iostream>
#include <climits>
using namespace std;


void swapMaxMin(int arr[], int size) {

    //corner case
    if(size <= 1) return;

    int mx = INT_MIN;
    int mn = INT_MAX;

    int mxidx = 0;
    int mnidx = 0;

    for(int i=0; i<size; i++) {
        if(mx < arr[i]) {
            mx = max(arr[i], mx);
            mxidx = i;
        }

        if(mn > arr[i]) {
            mn = min(arr[i], mn);
            mnidx = i;
        }
    }

    swap(arr[mxidx], arr[mnidx]);
}


int main() {
    int arr[6] = {3, 5, 7, 8, 9, 0};
    int size = sizeof(arr)/sizeof(int);
   
    swapMaxMin(arr,size);
   
    return 0;
}