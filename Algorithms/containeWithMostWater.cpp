#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    int start=0, end=height.size()-1;
    int maxheight=0;

    while (start<end) {
        int wt=end-start;
        int ht = min(height[start],height[end]);
        int cur= wt*ht;
        maxheight= max(maxheight,cur);

        if (start<end) {
            start++;
        }
        else {
            end--;
        }


    }
    cout<<maxheight;


    return 0;
}