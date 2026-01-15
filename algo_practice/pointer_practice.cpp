#include <iostream>
using namespace std;


// pass by reference
void val(int &b) {
    b = 20;
}

int main() {

    int a = 10;

    cout<<"before pass by reference:- "<<a<<endl;
    val(a);

    cout<<"after pass by reference:- "<<a <<endl;


    return 0;
}