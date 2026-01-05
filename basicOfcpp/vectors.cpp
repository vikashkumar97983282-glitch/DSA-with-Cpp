#include <iostream>
#include <vector>   // import vector library

using namespace std;

int main() {

    // vector
    vector<int> v;

    // vector decleare value
    vector<int> vec={1};
    cout<<vec[0]<<endl;

    // first value represent to SIZE and VALUE (SIZE,VALUE)
    vector<int> vect(3,1);
    cout<<vect[0]<<endl;
    cout<<vect[1]<<endl;

    vector<int> vect2={15,78,98,15,87,96,25};
    for (int val : vect2) {
        cout<<val<<endl;
    }



    return 0;
}