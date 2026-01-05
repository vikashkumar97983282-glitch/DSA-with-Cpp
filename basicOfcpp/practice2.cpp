#include <iostream>
using namespace std;

// binomial coefficient (nCr)
/*int fact(int val) {
    int num=1;
    for (int i=1; i<=val; i++) {
        num = num * i;
    }
    return num;
}
*/


// prime number
string prime(int n) {

    if (n<=1) {
        return "is not prime ";
    }
    for (int i=2; i<n; i++) {
        if (n % i == 0) {
            return to_string(n)+" is not prime";
        }
    }
    return to_string(n)+" is prime";
}




int main() {

    // // factorial (nCr)
    // int n = fact(6);
    // int r = fact(5);
    // double ncr = n / r;
    // cout<<ncr<<endl;


    // to check prime number
    cout << prime(5) << endl;



    return 0;
}
