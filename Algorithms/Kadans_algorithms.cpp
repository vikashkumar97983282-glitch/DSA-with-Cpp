#include <iostream>
#include <vector>
using namespace std;

int main() {

    // sum of max array

    vector<int> nums={3,-4,5,4,-1,7,-8};

    // you can use this as well!
    // vector<int> nums={-2,1,-3,4,-1,2,1,-5,4};

    int maxsum=INT_MIN; int currsum=0;

    for (int val:nums) {
        currsum = currsum + val;
        maxsum = max(currsum,maxsum);

        // if currsum in negative then currsum =0;
        if (currsum < 0) {
            currsum = 0;
        }
    }
    cout <<maxsum;

    return 0;
}