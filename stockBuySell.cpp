#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int maxProfit(vector<int> prices) {
    int maxProf = 0, bestBuy = prices[0];

    for(int i=1; i<prices.size(); i++) {   //initialising i from 1 ensures that have to buy before selling 
        if(prices[i] > bestBuy) {
            maxProf = max(maxProf, prices[i]-bestBuy); //max profit
        }

        bestBuy = min(prices[i], bestBuy);  //loop tracks bestBuy
    }
    return maxProf;
}

int main() {
    vector<int> prices = {7, 1, 5, 3, 2, 4};
    int maxprof = maxProfit(prices);
    cout << maxprof;
}