#include <iostream>
using namespace std;

void printArray(int arr[], int sz) {
    int start =0;
    int end =sz-1;

    while (start < end) {
        int min = 0; int max = 0;
        for (int i=0; i<sz; i++) {
            if (arr[start] < arr[i]) {
                min = arr[i];
            }
            if (arr[start] > arr[i]) {
                max = arr[i];
            }
        }
        swap(min,max);
        start++;
        end--;
    }
}

int main() {

    int arr[]={12,48,45,78,72,46,13};
    int sz=7;

    printArray(arr,sz);

    for (int i=0; i<sz; i++) {
        cout<<arr[i]<<endl;
    }


    return 0;
}