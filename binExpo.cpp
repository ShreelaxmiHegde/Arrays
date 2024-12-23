#include <iostream>
#include <climits>
using namespace std;

double calcPow(double x, int n) {
    long binForm = n; //stores n as long to handle large nums  
    if (n < 0) { //-ve expo corn case handeling
        x = 1 / x; //i.e 3^-5 is equi to (1/3)^5
        n = -n;  // Now calculate for positive n for the n which is already -ve
    }

    double ans = 1; //initializes answer to 1 as it will multiplied by 2  

    while(binForm > 0) {
        if(binForm %2 == 1) { //if the rem of n is 1 the execute it
            ans *= x; //multiply the ans by x
        }

        x *= x;  //squar for next iteration 
        binForm /= 2; //updating binForm (equivalent to shifting bits or deleting the previous bit)
    }

    return ans;
}

int main() {
    double x = 4;
    int n = 2;

    int result = calcPow(x,n);
    cout << result;

    return 0;
}