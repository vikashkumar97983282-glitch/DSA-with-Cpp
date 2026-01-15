#include <iostream>
using namespace std;

int main() {

    int arr[] = {1,8,3,4,5,6};

    cout << arr <<endl;  // array is pointer // array is constant pointer
    cout << *arr <<endl;
    cout << *(arr+1) <<endl; // print array with the help of pointer
    // because array memory is contigous
    // 4 is (4 * 4 = 16 bytes)
    cout << *(arr+4) <<endl;
    int* ptr = arr;
    cout<<*ptr<<endl;
    ptr++;
    cout<<*ptr<<endl; // ptr add 1 byte in arr



    return 0;
}