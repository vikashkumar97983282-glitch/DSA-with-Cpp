#include <iostream>
using namespace std;

int main() {

    int arr[] = {1,8,3,4,5,6};

    cout << arr <<endl;  // array is pointer // array is constant pointer
    cout << *arr <<endl;
    cout << *(arr+1) <<endl; // print array with the help of pointer
    cout << *(arr+4) <<endl;



    return 0;
}