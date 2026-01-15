#include <iostream>
using namespace std;

int main () {

    int a = 40;
    // pointer
    int* ptr = &a;
    // pointer to pointer
    int** ptr2 = &ptr;

    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<ptr<<endl; // print address of a value
    cout<<*(ptr)<<endl;  // print of value a which is stored address

    cout<<ptr2<<endl;  // print of address of ptr2
    cout<<*(ptr2)<<endl; // print value of ptr and ptr has stored of a address
    cout<<**(ptr2)<<endl;  // print value of a and (because a value stored in ptr and ptr val stored in ptr2


    // null pointer
    int** ptr3 = NULL;

    cout<<*ptr3<<endl;
    // cout<<ptr3<< endl;




    return 0;
}