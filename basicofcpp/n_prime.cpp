#include <iostream>
using namespace std;

bool isprime(int num) {
    if (num<=1) {
        return false;
    }

    for (int i=2; i<num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}



int main() {

    int val;
    cout<<"enter your number:-";
    cin>>val;
    int sum = 0;
    for (int i=2; i<=val; i++) {
        if (isprime(i)==true) {
            sum = sum + i;
        }
    }
    cout<<sum;


    return 0;
}
