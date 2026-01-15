#include <iostream>
using namespace std;



void val(int* ptr) {
    *ptr = 20;
}

int main() {

    int a = 10;

    val(&a);

    cout<<"value of a:- "<<a <<endl;


    return 0;
}