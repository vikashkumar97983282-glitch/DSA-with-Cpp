#include <iostream>
using namespace std;

int main() {

    // pointer increment(++) and decrement(--) in arithmetic
    int a = 10;
    int* ptr = &a;

    cout<<ptr<<endl;
    ptr++;
    cout<<ptr<<endl; // changes in hexadecimal form ( +4 bytes)
    ptr--;
    cout<<ptr<<endl; // changes in hexadecimal form ( -4 bytes)

    // pointer add/subtract in arithmetic
    ptr = ptr + 2; // changes in hexadecimal from 2int( +8 bytes)
    cout<<ptr<<endl;
    cout<<*ptr<<endl;



    return 0;
}