// C++ program to find Majority
// element in an array
#include <iostream>
#include <vector>
using namespace std;

// Function to find the Majority element in an array using Boyer-Moore Voting Algorithm
// It returns -1 if there is no majority element
int majorityElement(const vector<int>& arr) {

    int n = arr.size();
    int candidate = 0;
    int count = 0;

    // Find a candidate
    for (int num : arr) {
        if (count == 0) {
            candidate = num;
            count = 1;
        } else if (num == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Validate the candidate
    count = 0;
    for (int num : arr) {
        if (num == candidate) {
            count++;
        }
    }

    // If count is greater than n / 2, return the candidate; otherwise, return -1
    if (count > n / 2) {
        return candidate;
    } else {
        return -1;
    } 
}

int main() {
    vector<int> arr = {2, 3, 2, 8, 2, 2, 3, 8, 2};
    cout << majorityElement(arr) << endl;
    return 0;
}