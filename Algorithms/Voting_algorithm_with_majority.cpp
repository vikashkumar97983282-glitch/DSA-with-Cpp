#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> nums={1,5,4,1,1,2,5,2,2,4,5,2,2,2};
    int temp=0, ans=0;

    for (int i=0; i<nums.size(); i++) {
        if (temp==0) {
            ans = nums[i];
        }
        if (ans==nums[i]) {
            temp++;
        } else {
            temp--;
        }
    }
    cout<<ans<<endl;


    return 0;
}