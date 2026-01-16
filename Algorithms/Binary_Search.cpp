#include <iostream>
#include <vector>
using namespace std;

int BinarySearch(vector<int> arr, int tar) {
    int st =0, end=arr.size()-1;

    while (st<=end) {
        int mid = (st+end)/2;
        if (tar>arr[mid]) {
            st = mid+1;
        }
        else if (tar<arr[mid]) {
            end = mid-1;
        }
        else {
            return mid;
        }
    }
    return -1;
}

int main() {

    // it is used for sorted arr only. ascending or descending order

    // vector<int> arr = {1,2,3,4,5,6,7,8,9};
    vector<int> arr = {2,6,12,21,25,36,41,48};
    int tar = 25;

    cout<<"search number index:- "<<BinarySearch(arr,tar)<<endl;
    cout<<"print number:- "<<arr[BinarySearch(arr,tar)]<<endl;



    return 0;
}