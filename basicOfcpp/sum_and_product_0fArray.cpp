#include <iostream>
using namespace std;

int sumOfArray(int arr[],int sz) {
    int sum =0;
    for (int i=0; i<sz; i++) {
        sum = sum + arr[i];
    }
    return sum;
}
int productOfArray(int arr[],int sz) {
    int product =1;
    for (int i=0; i<sz; i++) {
        product = product * arr[i];
    }
    return product;
}


int main() {

    int arr[]={1,2,3,4,5,6,7,8,9};
    int sz=9;

    cout<<"the sum of array:-"<<sumOfArray(arr,sz)<<endl;
    cout<<"the product of array:-"<<productOfArray(arr,sz)<<endl;

    return 0;
}