#include <iostream>
using namespace std;

// double prime(int n) {
//
//     double sum = 0;
    // for (int i=3; i<=n; i++) {
    //     if (n<=1) {
    //         return 0;
    //     }

//         for (int j=2; j<=i; j++) {
//             if (n%j==0) {
//                 // return "is not prime";
//                 sum = sum +0;
//             }
//             sum = sum + j;
//         }
//
//     }
//     return sum;
// }

int main() {
    int n = 7;
    int sum=2;




    // for (int i=1; i<=n; i++) {
        for (int j=2; j<n; j++) {
            if (n%j==0) {
                cout<<"is not prime"<<endl;
                break;
            }
            return to_string()+"is prime";
        }
        // return to_string()+"is prime";

    // }




        // int n;
        // cout << "Enter n: ";
        // cin >> n;
        //
        // int count = 0;
        // int sum = 0;
        // for (int num = 2; count < n; num++) {
        //     bool isPrime = true;
        //     // Check if num is prime
        //     for (int i = 2; i * i <= num; i++) {
        //         if (num % i == 0) {
        //             isPrime = false;
        //             break;
        //         }
        //     }
        //     // If prime, add to sum and increment count
        //     if (isPrime) {
        //         sum += num;
        //         count++;
        //     }
        // }
        // cout << "Sum of first " << n << " prime numbers = " << sum << endl;



    return 0;
}