#include <iostream>
using namespace std;


int main() {
    int arr1[]={1,2,3,4,1,2,3,5,6,7};
    int sz=10;

    for (int i=0; i<sz; i++) {
        bool isunique=true;
        for (int j=0; j<sz; j++) {
            if (i!=j && arr1[i]==arr1[j]) {
                isunique=false;
                break;
            }
        }
        if (isunique) {
            cout<<arr1[i]<<" ";
        }
    }



    return 0;
}