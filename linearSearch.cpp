#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int> vec, int target) {
    
    for(int i : vec) {
        if(target == i) {
            cout << "Found";
        }
    }
    cout << "not found";
}

int main() {
    vector<int> vec = {2, 3, 5, 7, 8};
    int target = 52;
    linearSearch(vec, target);
}