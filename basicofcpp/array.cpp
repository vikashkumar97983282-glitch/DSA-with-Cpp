#include <iostream>
using namespace std;

int main() {

    int arr[5];

    for (int i=0; i<5; i++) {
        int a ;
        cout<<"enter the element :";
        cin>>a;
        arr[i]=a;
    }
    // print array
    for (int i=0; i<5; i++) {
        cout<<arr[i]<<endl;
    }

    int minval = arr[0];
    int maxval = arr[0];
    int minindex = 0;
    int maxindex = 0;


    // min value of array
    for (int i=0; i<5; i++) {
        if (arr[i]<minval) {
            minval = arr[i];
            minindex = i;
        }
    }
    cout<<"min value of array:-"<<minval<<endl;
    cout<<"index of min value:-"<<minindex<<endl;
    // max value of array
    for (int i=0; i<5; i++) {
        if (arr[i]>maxval) {
            maxval = arr[i];
            maxindex = i;
        }
    }
    cout<<"max value of array:-"<<maxval<<endl;
    cout<<"index of max value:-"<<maxindex<<endl;




    return 0;
}