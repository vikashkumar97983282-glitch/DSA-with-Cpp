#include <iostream>
using namespace std;



double reverse(int num) {

    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum = sum * 10 + digit;
        num = num / 10;
    }
    return sum;
}

int main() {

    // find to reverse number
    int num;
    cout<<"enter the number:-";
    cin>>num;
    cout<<"your reverse number is:-"<<reverse(num)<<endl;

    return 0;
}