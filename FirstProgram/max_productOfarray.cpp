#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums={2,3,-2,4};
    // vector<int> nums={-3,1,-1};

    int maxsum=INT_MIN; int currp=1;
    int temp=-1;

    for (int val:nums) {
        currp *= val;
        temp *= currp;
        maxsum = max(maxsum,temp);
        if (currp < 0 && currp > temp) {
            currp = 0;
        }
    }
    cout<<maxsum;


    return 0;
}