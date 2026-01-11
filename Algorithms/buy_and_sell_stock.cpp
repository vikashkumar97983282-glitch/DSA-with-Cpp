#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> prices = {9,2,8,1,7,5,4};
    int maxProfit=0, bestbuy=prices[0];

    for (int i=1; i<prices.size(); i++) {
        if (prices[i] > bestbuy) {
            maxProfit = max(maxProfit, prices[i]-bestbuy);
        }
        bestbuy = min (bestbuy, prices[i]);
    }
    cout<<maxProfit<<endl;


    return 0;
}